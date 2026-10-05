#include "bench/fib.hpp"

// RE Benchmark TU 15780 of 20000 (depth=28, stamp="default")
namespace bench_tu_15780 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15780>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15780
