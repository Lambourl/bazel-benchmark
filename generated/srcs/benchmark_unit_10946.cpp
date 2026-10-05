#include "bench/fib.hpp"

// RE Benchmark TU 10946 of 20000 (depth=28, stamp="default")
namespace bench_tu_10946 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10946>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10946
