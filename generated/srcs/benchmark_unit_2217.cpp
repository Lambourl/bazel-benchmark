#include "bench/fib.hpp"

// RE Benchmark TU 2217 of 20000 (depth=28, stamp="default")
namespace bench_tu_2217 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2217>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2217
