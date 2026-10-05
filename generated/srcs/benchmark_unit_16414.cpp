#include "bench/fib.hpp"

// RE Benchmark TU 16414 of 20000 (depth=28, stamp="default")
namespace bench_tu_16414 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16414>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16414
