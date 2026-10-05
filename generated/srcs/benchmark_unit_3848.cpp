#include "bench/fib.hpp"

// RE Benchmark TU 3848 of 20000 (depth=28, stamp="default")
namespace bench_tu_3848 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3848>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3848
