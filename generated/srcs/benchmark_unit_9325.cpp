#include "bench/fib.hpp"

// RE Benchmark TU 9325 of 20000 (depth=28, stamp="default")
namespace bench_tu_9325 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9325>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9325
