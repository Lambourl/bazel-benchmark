#include "bench/fib.hpp"

// RE Benchmark TU 2906 of 20000 (depth=28, stamp="default")
namespace bench_tu_2906 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2906>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2906
