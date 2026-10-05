#include "bench/fib.hpp"

// RE Benchmark TU 8205 of 20000 (depth=28, stamp="default")
namespace bench_tu_8205 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8205>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8205
