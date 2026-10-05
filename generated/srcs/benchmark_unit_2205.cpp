#include "bench/fib.hpp"

// RE Benchmark TU 2205 of 20000 (depth=28, stamp="default")
namespace bench_tu_2205 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2205>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2205
