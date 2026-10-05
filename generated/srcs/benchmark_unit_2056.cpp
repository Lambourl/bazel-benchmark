#include "bench/fib.hpp"

// RE Benchmark TU 2056 of 20000 (depth=28, stamp="default")
namespace bench_tu_2056 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2056>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2056
