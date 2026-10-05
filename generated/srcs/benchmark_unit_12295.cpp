#include "bench/fib.hpp"

// RE Benchmark TU 12295 of 20000 (depth=28, stamp="default")
namespace bench_tu_12295 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12295>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12295
