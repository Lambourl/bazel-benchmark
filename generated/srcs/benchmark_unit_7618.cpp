#include "bench/fib.hpp"

// RE Benchmark TU 7618 of 20000 (depth=28, stamp="default")
namespace bench_tu_7618 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7618>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7618
