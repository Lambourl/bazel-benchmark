#include "bench/fib.hpp"

// RE Benchmark TU 17878 of 20000 (depth=28, stamp="default")
namespace bench_tu_17878 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17878>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17878
