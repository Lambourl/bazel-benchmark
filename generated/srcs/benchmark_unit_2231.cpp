#include "bench/fib.hpp"

// RE Benchmark TU 2231 of 20000 (depth=28, stamp="default")
namespace bench_tu_2231 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2231>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2231
