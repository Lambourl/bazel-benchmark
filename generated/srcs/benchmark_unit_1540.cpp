#include "bench/fib.hpp"

// RE Benchmark TU 1540 of 20000 (depth=28, stamp="default")
namespace bench_tu_1540 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1540>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1540
