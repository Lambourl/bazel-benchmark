#include "bench/fib.hpp"

// RE Benchmark TU 10325 of 20000 (depth=28, stamp="default")
namespace bench_tu_10325 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10325>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10325
