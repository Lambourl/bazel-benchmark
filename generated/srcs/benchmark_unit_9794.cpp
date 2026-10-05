#include "bench/fib.hpp"

// RE Benchmark TU 9794 of 20000 (depth=28, stamp="default")
namespace bench_tu_9794 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9794>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9794
