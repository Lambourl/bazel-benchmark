#include "bench/fib.hpp"

// RE Benchmark TU 5118 of 20000 (depth=28, stamp="default")
namespace bench_tu_5118 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5118>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5118
