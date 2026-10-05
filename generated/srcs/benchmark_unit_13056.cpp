#include "bench/fib.hpp"

// RE Benchmark TU 13056 of 20000 (depth=28, stamp="default")
namespace bench_tu_13056 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13056>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13056
