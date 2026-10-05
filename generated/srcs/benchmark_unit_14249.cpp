#include "bench/fib.hpp"

// RE Benchmark TU 14249 of 20000 (depth=28, stamp="default")
namespace bench_tu_14249 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14249>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14249
