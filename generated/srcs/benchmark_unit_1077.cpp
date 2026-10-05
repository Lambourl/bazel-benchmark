#include "bench/fib.hpp"

// RE Benchmark TU 1077 of 20000 (depth=28, stamp="default")
namespace bench_tu_1077 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1077>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1077
