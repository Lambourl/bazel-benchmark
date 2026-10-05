#include "bench/fib.hpp"

// RE Benchmark TU 896 of 20000 (depth=28, stamp="default")
namespace bench_tu_896 {
constexpr unsigned long long result = ::bench::slow_fib<28, 896>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_896
