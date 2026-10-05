#include "bench/fib.hpp"

// RE Benchmark TU 4504 of 20000 (depth=28, stamp="default")
namespace bench_tu_4504 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4504>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4504
