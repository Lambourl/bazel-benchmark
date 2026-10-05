#include "bench/fib.hpp"

// RE Benchmark TU 3322 of 20000 (depth=28, stamp="default")
namespace bench_tu_3322 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3322>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3322
