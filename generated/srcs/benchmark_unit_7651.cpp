#include "bench/fib.hpp"

// RE Benchmark TU 7651 of 20000 (depth=28, stamp="default")
namespace bench_tu_7651 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7651>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7651
