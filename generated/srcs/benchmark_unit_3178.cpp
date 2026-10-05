#include "bench/fib.hpp"

// RE Benchmark TU 3178 of 20000 (depth=28, stamp="default")
namespace bench_tu_3178 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3178>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3178
