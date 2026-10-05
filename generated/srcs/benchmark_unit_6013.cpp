#include "bench/fib.hpp"

// RE Benchmark TU 6013 of 20000 (depth=28, stamp="default")
namespace bench_tu_6013 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6013>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6013
