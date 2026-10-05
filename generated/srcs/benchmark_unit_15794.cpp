#include "bench/fib.hpp"

// RE Benchmark TU 15794 of 20000 (depth=28, stamp="default")
namespace bench_tu_15794 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15794>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15794
