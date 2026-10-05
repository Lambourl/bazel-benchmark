#include "bench/fib.hpp"

// RE Benchmark TU 10774 of 20000 (depth=28, stamp="default")
namespace bench_tu_10774 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10774>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10774
