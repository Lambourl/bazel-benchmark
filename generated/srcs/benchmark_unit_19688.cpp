#include "bench/fib.hpp"

// RE Benchmark TU 19688 of 20000 (depth=28, stamp="default")
namespace bench_tu_19688 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19688>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19688
