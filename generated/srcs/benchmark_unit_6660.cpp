#include "bench/fib.hpp"

// RE Benchmark TU 6660 of 20000 (depth=28, stamp="default")
namespace bench_tu_6660 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6660>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6660
