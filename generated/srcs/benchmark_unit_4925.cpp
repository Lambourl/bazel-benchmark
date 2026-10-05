#include "bench/fib.hpp"

// RE Benchmark TU 4925 of 20000 (depth=28, stamp="default")
namespace bench_tu_4925 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4925>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4925
