#include "bench/fib.hpp"

// RE Benchmark TU 19671 of 20000 (depth=28, stamp="default")
namespace bench_tu_19671 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19671>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19671
