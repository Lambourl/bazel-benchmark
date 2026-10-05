#include "bench/fib.hpp"

// RE Benchmark TU 547 of 20000 (depth=28, stamp="default")
namespace bench_tu_547 {
constexpr unsigned long long result = ::bench::slow_fib<28, 547>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_547
