#include "bench/fib.hpp"

// RE Benchmark TU 3470 of 20000 (depth=28, stamp="default")
namespace bench_tu_3470 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3470>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3470
