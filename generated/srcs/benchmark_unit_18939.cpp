#include "bench/fib.hpp"

// RE Benchmark TU 18939 of 20000 (depth=28, stamp="default")
namespace bench_tu_18939 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18939>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18939
