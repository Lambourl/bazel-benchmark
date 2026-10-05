#include "bench/fib.hpp"

// RE Benchmark TU 688 of 20000 (depth=28, stamp="default")
namespace bench_tu_688 {
constexpr unsigned long long result = ::bench::slow_fib<28, 688>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_688
