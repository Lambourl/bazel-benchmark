#include "bench/fib.hpp"

// RE Benchmark TU 110 of 20000 (depth=28, stamp="default")
namespace bench_tu_110 {
constexpr unsigned long long result = ::bench::slow_fib<28, 110>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_110
