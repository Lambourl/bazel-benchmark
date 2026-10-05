#include "bench/fib.hpp"

// RE Benchmark TU 2645 of 20000 (depth=28, stamp="default")
namespace bench_tu_2645 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2645>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2645
