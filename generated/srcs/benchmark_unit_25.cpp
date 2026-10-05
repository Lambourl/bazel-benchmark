#include "bench/fib.hpp"

// RE Benchmark TU 25 of 20000 (depth=28, stamp="default")
namespace bench_tu_25 {
constexpr unsigned long long result = ::bench::slow_fib<28, 25>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_25
