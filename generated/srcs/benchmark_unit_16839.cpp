#include "bench/fib.hpp"

// RE Benchmark TU 16839 of 20000 (depth=28, stamp="default")
namespace bench_tu_16839 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16839>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16839
