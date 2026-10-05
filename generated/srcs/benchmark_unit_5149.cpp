#include "bench/fib.hpp"

// RE Benchmark TU 5149 of 20000 (depth=28, stamp="default")
namespace bench_tu_5149 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5149>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5149
