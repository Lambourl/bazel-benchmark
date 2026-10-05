#include "bench/fib.hpp"

// RE Benchmark TU 10264 of 20000 (depth=28, stamp="default")
namespace bench_tu_10264 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10264>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10264
