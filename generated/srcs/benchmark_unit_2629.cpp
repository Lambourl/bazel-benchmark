#include "bench/fib.hpp"

// RE Benchmark TU 2629 of 20000 (depth=28, stamp="default")
namespace bench_tu_2629 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2629>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2629
