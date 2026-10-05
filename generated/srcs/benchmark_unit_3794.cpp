#include "bench/fib.hpp"

// RE Benchmark TU 3794 of 20000 (depth=28, stamp="default")
namespace bench_tu_3794 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3794>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3794
