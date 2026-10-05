#include "bench/fib.hpp"

// RE Benchmark TU 8290 of 20000 (depth=28, stamp="default")
namespace bench_tu_8290 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8290>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8290
