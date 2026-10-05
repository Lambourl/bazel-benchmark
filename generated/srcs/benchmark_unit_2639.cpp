#include "bench/fib.hpp"

// RE Benchmark TU 2639 of 20000 (depth=28, stamp="default")
namespace bench_tu_2639 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2639>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2639
