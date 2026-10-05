#include "bench/fib.hpp"

// RE Benchmark TU 18980 of 20000 (depth=28, stamp="default")
namespace bench_tu_18980 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18980>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18980
