#include "bench/fib.hpp"

// RE Benchmark TU 13672 of 20000 (depth=28, stamp="default")
namespace bench_tu_13672 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13672>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13672
