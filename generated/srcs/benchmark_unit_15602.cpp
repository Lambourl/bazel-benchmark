#include "bench/fib.hpp"

// RE Benchmark TU 15602 of 20000 (depth=28, stamp="default")
namespace bench_tu_15602 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15602>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15602
