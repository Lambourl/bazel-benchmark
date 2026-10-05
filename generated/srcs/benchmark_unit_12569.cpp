#include "bench/fib.hpp"

// RE Benchmark TU 12569 of 20000 (depth=28, stamp="default")
namespace bench_tu_12569 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12569>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12569
