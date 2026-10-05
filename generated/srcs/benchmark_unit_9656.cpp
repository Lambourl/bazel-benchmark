#include "bench/fib.hpp"

// RE Benchmark TU 9656 of 20000 (depth=28, stamp="default")
namespace bench_tu_9656 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9656>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9656
