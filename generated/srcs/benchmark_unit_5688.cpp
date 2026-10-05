#include "bench/fib.hpp"

// RE Benchmark TU 5688 of 20000 (depth=28, stamp="default")
namespace bench_tu_5688 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5688>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5688
