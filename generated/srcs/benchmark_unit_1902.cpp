#include "bench/fib.hpp"

// RE Benchmark TU 1902 of 20000 (depth=28, stamp="default")
namespace bench_tu_1902 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1902>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1902
