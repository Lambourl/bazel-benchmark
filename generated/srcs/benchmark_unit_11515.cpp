#include "bench/fib.hpp"

// RE Benchmark TU 11515 of 20000 (depth=28, stamp="default")
namespace bench_tu_11515 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11515>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11515
