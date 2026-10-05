#include "bench/fib.hpp"

// RE Benchmark TU 76 of 20000 (depth=28, stamp="default")
namespace bench_tu_76 {
constexpr unsigned long long result = ::bench::slow_fib<28, 76>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_76
