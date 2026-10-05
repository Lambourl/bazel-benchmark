#include "bench/fib.hpp"

// RE Benchmark TU 6506 of 20000 (depth=28, stamp="default")
namespace bench_tu_6506 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6506>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6506
