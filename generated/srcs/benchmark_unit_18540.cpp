#include "bench/fib.hpp"

// RE Benchmark TU 18540 of 20000 (depth=28, stamp="default")
namespace bench_tu_18540 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18540>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18540
