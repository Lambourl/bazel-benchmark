#include "bench/fib.hpp"

// RE Benchmark TU 16517 of 20000 (depth=28, stamp="default")
namespace bench_tu_16517 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16517>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16517
