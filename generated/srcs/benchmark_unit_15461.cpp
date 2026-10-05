#include "bench/fib.hpp"

// RE Benchmark TU 15461 of 20000 (depth=28, stamp="default")
namespace bench_tu_15461 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15461>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15461
