#include "bench/fib.hpp"

// RE Benchmark TU 18117 of 20000 (depth=28, stamp="default")
namespace bench_tu_18117 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18117>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18117
