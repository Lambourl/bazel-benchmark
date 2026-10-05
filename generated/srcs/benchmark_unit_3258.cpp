#include "bench/fib.hpp"

// RE Benchmark TU 3258 of 20000 (depth=28, stamp="default")
namespace bench_tu_3258 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3258>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3258
