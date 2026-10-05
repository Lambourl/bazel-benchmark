#include "bench/fib.hpp"

// RE Benchmark TU 3126 of 20000 (depth=28, stamp="default")
namespace bench_tu_3126 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3126>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3126
