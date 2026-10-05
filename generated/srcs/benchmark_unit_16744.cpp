#include "bench/fib.hpp"

// RE Benchmark TU 16744 of 20000 (depth=28, stamp="default")
namespace bench_tu_16744 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16744>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16744
