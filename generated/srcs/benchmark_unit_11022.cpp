#include "bench/fib.hpp"

// RE Benchmark TU 11022 of 20000 (depth=28, stamp="default")
namespace bench_tu_11022 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11022>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11022
