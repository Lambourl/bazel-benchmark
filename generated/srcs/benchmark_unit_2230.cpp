#include "bench/fib.hpp"

// RE Benchmark TU 2230 of 20000 (depth=28, stamp="default")
namespace bench_tu_2230 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2230>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2230
