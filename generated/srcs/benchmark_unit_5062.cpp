#include "bench/fib.hpp"

// RE Benchmark TU 5062 of 20000 (depth=28, stamp="default")
namespace bench_tu_5062 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5062>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5062
