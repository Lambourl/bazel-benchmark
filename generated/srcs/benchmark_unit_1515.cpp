#include "bench/fib.hpp"

// RE Benchmark TU 1515 of 20000 (depth=28, stamp="default")
namespace bench_tu_1515 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1515>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1515
