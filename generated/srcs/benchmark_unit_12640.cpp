#include "bench/fib.hpp"

// RE Benchmark TU 12640 of 20000 (depth=28, stamp="default")
namespace bench_tu_12640 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12640>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12640
