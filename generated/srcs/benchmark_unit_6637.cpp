#include "bench/fib.hpp"

// RE Benchmark TU 6637 of 20000 (depth=28, stamp="default")
namespace bench_tu_6637 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6637>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6637
