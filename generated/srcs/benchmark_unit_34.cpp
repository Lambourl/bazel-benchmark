#include "bench/fib.hpp"

// RE Benchmark TU 34 of 20000 (depth=28, stamp="default")
namespace bench_tu_34 {
constexpr unsigned long long result = ::bench::slow_fib<28, 34>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_34
