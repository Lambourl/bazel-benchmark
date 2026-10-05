#include "bench/fib.hpp"

// RE Benchmark TU 18111 of 20000 (depth=28, stamp="default")
namespace bench_tu_18111 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18111>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18111
