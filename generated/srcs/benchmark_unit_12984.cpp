#include "bench/fib.hpp"

// RE Benchmark TU 12984 of 20000 (depth=28, stamp="default")
namespace bench_tu_12984 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12984>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12984
