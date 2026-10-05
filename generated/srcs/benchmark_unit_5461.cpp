#include "bench/fib.hpp"

// RE Benchmark TU 5461 of 20000 (depth=28, stamp="default")
namespace bench_tu_5461 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5461>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5461
