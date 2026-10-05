#include "bench/fib.hpp"

// RE Benchmark TU 5946 of 20000 (depth=28, stamp="default")
namespace bench_tu_5946 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5946>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5946
