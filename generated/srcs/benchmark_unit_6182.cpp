#include "bench/fib.hpp"

// RE Benchmark TU 6182 of 20000 (depth=28, stamp="default")
namespace bench_tu_6182 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6182>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6182
