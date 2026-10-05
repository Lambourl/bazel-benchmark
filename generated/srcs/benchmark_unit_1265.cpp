#include "bench/fib.hpp"

// RE Benchmark TU 1265 of 20000 (depth=28, stamp="default")
namespace bench_tu_1265 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1265>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1265
