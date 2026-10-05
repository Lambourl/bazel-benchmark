#include "bench/fib.hpp"

// RE Benchmark TU 372 of 20000 (depth=28, stamp="default")
namespace bench_tu_372 {
constexpr unsigned long long result = ::bench::slow_fib<28, 372>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_372
