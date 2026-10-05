#include "bench/fib.hpp"

// RE Benchmark TU 421 of 20000 (depth=28, stamp="default")
namespace bench_tu_421 {
constexpr unsigned long long result = ::bench::slow_fib<28, 421>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_421
