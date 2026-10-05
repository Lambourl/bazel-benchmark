#include "bench/fib.hpp"

// RE Benchmark TU 5290 of 20000 (depth=28, stamp="default")
namespace bench_tu_5290 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5290>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5290
