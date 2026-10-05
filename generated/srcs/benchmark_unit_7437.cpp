#include "bench/fib.hpp"

// RE Benchmark TU 7437 of 20000 (depth=28, stamp="default")
namespace bench_tu_7437 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7437>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7437
