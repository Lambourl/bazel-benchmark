#include "bench/fib.hpp"

// RE Benchmark TU 10804 of 20000 (depth=28, stamp="default")
namespace bench_tu_10804 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10804>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10804
