#include "bench/fib.hpp"

// RE Benchmark TU 17360 of 20000 (depth=28, stamp="default")
namespace bench_tu_17360 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17360>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17360
