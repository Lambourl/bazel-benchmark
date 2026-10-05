#include "bench/fib.hpp"

// RE Benchmark TU 17002 of 20000 (depth=28, stamp="default")
namespace bench_tu_17002 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17002>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17002
