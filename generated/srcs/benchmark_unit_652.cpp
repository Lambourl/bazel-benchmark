#include "bench/fib.hpp"

// RE Benchmark TU 652 of 20000 (depth=28, stamp="default")
namespace bench_tu_652 {
constexpr unsigned long long result = ::bench::slow_fib<28, 652>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_652
