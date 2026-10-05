#include "bench/fib.hpp"

// RE Benchmark TU 340 of 20000 (depth=28, stamp="default")
namespace bench_tu_340 {
constexpr unsigned long long result = ::bench::slow_fib<28, 340>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_340
