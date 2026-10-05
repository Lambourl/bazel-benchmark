#pragma once

// ============================================================================
// Compile-time Fibonacci "suite" used to make every translation unit expensive
// to compile. The template is intentionally written to DEFEAT memoization:
// each recursive branch carries a unique Tag type, so the compiler cannot
// collapse Fib<N-1> computed on the left with Fib<N-1> computed elsewhere.
// This forces ~2^N template instantiations per TU, which is exactly the kind
// of real compiler work we want to distribute across remote-execution workers.
// ============================================================================

namespace bench {

// Branch tags: distinct types per (N, side) keep each instantiation unique.
template <int N, typename Tag> struct Left;
template <int N, typename Tag> struct Right;

template <int N, typename Tag>
struct Fib {
    static constexpr unsigned long long value =
        Fib<N - 1, Left<N, Tag>>::value + Fib<N - 2, Right<N, Tag>>::value;
};

template <typename Tag>
struct Fib<0, Tag> {
    static constexpr unsigned long long value = 0ULL;
};

template <typename Tag>
struct Fib<1, Tag> {
    static constexpr unsigned long long value = 1ULL;
};

// A per-TU root tag so no two translation units share instantiations.
template <int Id> struct TuRoot {};

template <int N, int Id>
constexpr unsigned long long slow_fib() {
    return Fib<N, TuRoot<Id>>::value;
}

}  // namespace bench
