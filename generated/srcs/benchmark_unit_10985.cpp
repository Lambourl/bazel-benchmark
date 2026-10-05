#include "bench/fib.hpp"

// RE Benchmark TU 10985 of 20000 (depth=28, stamp="default")
namespace bench_tu_10985 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10985>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10985
