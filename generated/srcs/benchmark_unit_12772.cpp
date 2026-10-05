#include "bench/fib.hpp"

// RE Benchmark TU 12772 of 20000 (depth=28, stamp="default")
namespace bench_tu_12772 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12772>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12772
