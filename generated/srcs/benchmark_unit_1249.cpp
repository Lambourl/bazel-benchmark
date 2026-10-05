#include "bench/fib.hpp"

// RE Benchmark TU 1249 of 20000 (depth=28, stamp="default")
namespace bench_tu_1249 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1249>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1249
