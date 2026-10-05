#include "bench/fib.hpp"

// RE Benchmark TU 5715 of 20000 (depth=28, stamp="default")
namespace bench_tu_5715 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5715>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5715
