#include "bench/fib.hpp"

// RE Benchmark TU 2265 of 20000 (depth=28, stamp="default")
namespace bench_tu_2265 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2265>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2265
