#include "bench/fib.hpp"

// RE Benchmark TU 5618 of 20000 (depth=28, stamp="default")
namespace bench_tu_5618 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5618>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5618
