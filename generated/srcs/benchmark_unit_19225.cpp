#include "bench/fib.hpp"

// RE Benchmark TU 19225 of 20000 (depth=28, stamp="default")
namespace bench_tu_19225 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19225>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19225
