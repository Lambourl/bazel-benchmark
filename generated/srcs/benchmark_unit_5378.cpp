#include "bench/fib.hpp"

// RE Benchmark TU 5378 of 20000 (depth=28, stamp="default")
namespace bench_tu_5378 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5378>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5378
