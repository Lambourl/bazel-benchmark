#include "bench/fib.hpp"

// RE Benchmark TU 3131 of 20000 (depth=28, stamp="default")
namespace bench_tu_3131 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3131>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3131
