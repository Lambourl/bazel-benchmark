#include "bench/fib.hpp"

// RE Benchmark TU 15374 of 20000 (depth=28, stamp="default")
namespace bench_tu_15374 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15374>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15374
