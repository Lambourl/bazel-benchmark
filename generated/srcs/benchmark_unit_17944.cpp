#include "bench/fib.hpp"

// RE Benchmark TU 17944 of 20000 (depth=28, stamp="default")
namespace bench_tu_17944 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17944>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17944
