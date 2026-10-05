#include "bench/fib.hpp"

// RE Benchmark TU 12582 of 20000 (depth=28, stamp="default")
namespace bench_tu_12582 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12582>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12582
