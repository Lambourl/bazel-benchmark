#include "bench/fib.hpp"

// RE Benchmark TU 5098 of 20000 (depth=28, stamp="default")
namespace bench_tu_5098 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5098>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5098
