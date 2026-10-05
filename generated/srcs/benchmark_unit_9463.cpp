#include "bench/fib.hpp"

// RE Benchmark TU 9463 of 20000 (depth=28, stamp="default")
namespace bench_tu_9463 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9463>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9463
