#include "bench/fib.hpp"

// RE Benchmark TU 17905 of 20000 (depth=28, stamp="default")
namespace bench_tu_17905 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17905>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17905
