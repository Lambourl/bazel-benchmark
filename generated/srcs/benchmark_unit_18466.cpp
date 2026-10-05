#include "bench/fib.hpp"

// RE Benchmark TU 18466 of 20000 (depth=28, stamp="default")
namespace bench_tu_18466 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18466>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18466
