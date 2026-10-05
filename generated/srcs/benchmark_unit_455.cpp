#include "bench/fib.hpp"

// RE Benchmark TU 455 of 20000 (depth=28, stamp="default")
namespace bench_tu_455 {
constexpr unsigned long long result = ::bench::slow_fib<28, 455>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_455
