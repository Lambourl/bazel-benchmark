#include "bench/fib.hpp"

// RE Benchmark TU 19120 of 20000 (depth=28, stamp="default")
namespace bench_tu_19120 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19120>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19120
