#include "bench/fib.hpp"

// RE Benchmark TU 270 of 20000 (depth=28, stamp="default")
namespace bench_tu_270 {
constexpr unsigned long long result = ::bench::slow_fib<28, 270>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_270
