#include "bench/fib.hpp"

// RE Benchmark TU 19878 of 20000 (depth=28, stamp="default")
namespace bench_tu_19878 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19878>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19878
