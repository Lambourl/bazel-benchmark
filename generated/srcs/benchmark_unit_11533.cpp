#include "bench/fib.hpp"

// RE Benchmark TU 11533 of 20000 (depth=28, stamp="default")
namespace bench_tu_11533 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11533>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11533
