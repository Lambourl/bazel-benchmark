#include "bench/fib.hpp"

// RE Benchmark TU 17155 of 20000 (depth=28, stamp="default")
namespace bench_tu_17155 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17155>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17155
