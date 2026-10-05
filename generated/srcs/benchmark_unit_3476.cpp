#include "bench/fib.hpp"

// RE Benchmark TU 3476 of 20000 (depth=28, stamp="default")
namespace bench_tu_3476 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3476>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3476
