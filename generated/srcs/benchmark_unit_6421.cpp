#include "bench/fib.hpp"

// RE Benchmark TU 6421 of 20000 (depth=28, stamp="default")
namespace bench_tu_6421 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6421>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6421
