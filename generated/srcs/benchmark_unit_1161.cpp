#include "bench/fib.hpp"

// RE Benchmark TU 1161 of 20000 (depth=28, stamp="default")
namespace bench_tu_1161 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1161>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1161
