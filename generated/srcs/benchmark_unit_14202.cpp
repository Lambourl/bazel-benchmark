#include "bench/fib.hpp"

// RE Benchmark TU 14202 of 20000 (depth=28, stamp="default")
namespace bench_tu_14202 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14202>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14202
