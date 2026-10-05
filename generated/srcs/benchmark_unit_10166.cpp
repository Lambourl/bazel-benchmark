#include "bench/fib.hpp"

// RE Benchmark TU 10166 of 20000 (depth=28, stamp="default")
namespace bench_tu_10166 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10166>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10166
