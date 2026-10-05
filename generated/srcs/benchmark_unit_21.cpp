#include "bench/fib.hpp"

// RE Benchmark TU 21 of 20000 (depth=28, stamp="default")
namespace bench_tu_21 {
constexpr unsigned long long result = ::bench::slow_fib<28, 21>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_21
