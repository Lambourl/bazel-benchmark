#include "bench/fib.hpp"

// RE Benchmark TU 17998 of 20000 (depth=28, stamp="default")
namespace bench_tu_17998 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17998>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17998
