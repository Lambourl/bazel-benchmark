#include "bench/fib.hpp"

// RE Benchmark TU 13645 of 20000 (depth=28, stamp="default")
namespace bench_tu_13645 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13645>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13645
