#include "bench/fib.hpp"

// RE Benchmark TU 17376 of 20000 (depth=28, stamp="default")
namespace bench_tu_17376 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17376>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17376
