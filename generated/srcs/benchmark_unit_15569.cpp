#include "bench/fib.hpp"

// RE Benchmark TU 15569 of 20000 (depth=28, stamp="default")
namespace bench_tu_15569 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15569>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15569
