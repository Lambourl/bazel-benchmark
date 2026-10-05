#include "bench/fib.hpp"

// RE Benchmark TU 13198 of 20000 (depth=28, stamp="default")
namespace bench_tu_13198 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13198>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13198
