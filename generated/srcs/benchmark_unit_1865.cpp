#include "bench/fib.hpp"

// RE Benchmark TU 1865 of 20000 (depth=28, stamp="default")
namespace bench_tu_1865 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1865>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1865
