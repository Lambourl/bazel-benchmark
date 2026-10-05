#include "bench/fib.hpp"

// RE Benchmark TU 10170 of 20000 (depth=28, stamp="default")
namespace bench_tu_10170 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10170>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10170
