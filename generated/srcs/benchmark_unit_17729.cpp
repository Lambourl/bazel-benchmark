#include "bench/fib.hpp"

// RE Benchmark TU 17729 of 20000 (depth=28, stamp="default")
namespace bench_tu_17729 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17729>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17729
