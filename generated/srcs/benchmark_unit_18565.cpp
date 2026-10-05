#include "bench/fib.hpp"

// RE Benchmark TU 18565 of 20000 (depth=28, stamp="default")
namespace bench_tu_18565 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18565>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18565
