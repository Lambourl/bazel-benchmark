#include "bench/fib.hpp"

// RE Benchmark TU 10334 of 20000 (depth=28, stamp="default")
namespace bench_tu_10334 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10334>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10334
