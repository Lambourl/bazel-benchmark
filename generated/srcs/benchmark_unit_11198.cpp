#include "bench/fib.hpp"

// RE Benchmark TU 11198 of 20000 (depth=28, stamp="default")
namespace bench_tu_11198 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11198>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11198
