#include "bench/fib.hpp"

// RE Benchmark TU 2662 of 20000 (depth=28, stamp="default")
namespace bench_tu_2662 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2662>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2662
