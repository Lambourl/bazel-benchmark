#include "bench/fib.hpp"

// RE Benchmark TU 18506 of 20000 (depth=28, stamp="default")
namespace bench_tu_18506 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18506>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18506
