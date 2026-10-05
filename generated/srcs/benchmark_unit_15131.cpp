#include "bench/fib.hpp"

// RE Benchmark TU 15131 of 20000 (depth=28, stamp="default")
namespace bench_tu_15131 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15131>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15131
