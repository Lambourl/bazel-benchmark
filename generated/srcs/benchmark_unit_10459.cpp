#include "bench/fib.hpp"

// RE Benchmark TU 10459 of 20000 (depth=28, stamp="default")
namespace bench_tu_10459 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10459>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10459
