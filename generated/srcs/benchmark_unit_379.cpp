#include "bench/fib.hpp"

// RE Benchmark TU 379 of 20000 (depth=28, stamp="default")
namespace bench_tu_379 {
constexpr unsigned long long result = ::bench::slow_fib<28, 379>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_379
