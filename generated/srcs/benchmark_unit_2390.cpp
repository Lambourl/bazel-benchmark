#include "bench/fib.hpp"

// RE Benchmark TU 2390 of 20000 (depth=28, stamp="default")
namespace bench_tu_2390 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2390>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2390
