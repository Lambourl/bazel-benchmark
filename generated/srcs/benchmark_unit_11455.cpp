#include "bench/fib.hpp"

// RE Benchmark TU 11455 of 20000 (depth=28, stamp="default")
namespace bench_tu_11455 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11455>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11455
