#include "bench/fib.hpp"

// RE Benchmark TU 17988 of 20000 (depth=28, stamp="default")
namespace bench_tu_17988 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17988>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17988
