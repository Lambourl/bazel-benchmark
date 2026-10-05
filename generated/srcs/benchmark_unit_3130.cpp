#include "bench/fib.hpp"

// RE Benchmark TU 3130 of 20000 (depth=28, stamp="default")
namespace bench_tu_3130 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3130>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3130
