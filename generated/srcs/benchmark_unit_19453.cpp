#include "bench/fib.hpp"

// RE Benchmark TU 19453 of 20000 (depth=28, stamp="default")
namespace bench_tu_19453 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19453>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19453
