#include "bench/fib.hpp"

// RE Benchmark TU 3441 of 20000 (depth=28, stamp="default")
namespace bench_tu_3441 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3441>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3441
