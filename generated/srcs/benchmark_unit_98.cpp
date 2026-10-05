#include "bench/fib.hpp"

// RE Benchmark TU 98 of 20000 (depth=28, stamp="default")
namespace bench_tu_98 {
constexpr unsigned long long result = ::bench::slow_fib<28, 98>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_98
