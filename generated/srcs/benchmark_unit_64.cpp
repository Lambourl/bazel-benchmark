#include "bench/fib.hpp"

// RE Benchmark TU 64 of 20000 (depth=28, stamp="default")
namespace bench_tu_64 {
constexpr unsigned long long result = ::bench::slow_fib<28, 64>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_64
