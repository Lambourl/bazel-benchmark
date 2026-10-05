#include "bench/fib.hpp"

// RE Benchmark TU 3917 of 20000 (depth=28, stamp="default")
namespace bench_tu_3917 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3917>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3917
