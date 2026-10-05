#include "bench/fib.hpp"

// RE Benchmark TU 1538 of 20000 (depth=28, stamp="default")
namespace bench_tu_1538 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1538>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1538
