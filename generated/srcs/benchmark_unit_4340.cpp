#include "bench/fib.hpp"

// RE Benchmark TU 4340 of 20000 (depth=28, stamp="default")
namespace bench_tu_4340 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4340>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4340
