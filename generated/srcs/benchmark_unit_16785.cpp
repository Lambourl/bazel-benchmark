#include "bench/fib.hpp"

// RE Benchmark TU 16785 of 20000 (depth=28, stamp="default")
namespace bench_tu_16785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16785
