#include "bench/fib.hpp"

// RE Benchmark TU 17434 of 20000 (depth=28, stamp="default")
namespace bench_tu_17434 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17434>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17434
