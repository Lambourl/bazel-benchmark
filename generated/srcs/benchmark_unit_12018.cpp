#include "bench/fib.hpp"

// RE Benchmark TU 12018 of 20000 (depth=28, stamp="default")
namespace bench_tu_12018 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12018>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12018
