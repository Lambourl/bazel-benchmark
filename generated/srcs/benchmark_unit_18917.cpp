#include "bench/fib.hpp"

// RE Benchmark TU 18917 of 20000 (depth=28, stamp="default")
namespace bench_tu_18917 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18917>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18917
