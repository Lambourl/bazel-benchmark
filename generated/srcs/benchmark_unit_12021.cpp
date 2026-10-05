#include "bench/fib.hpp"

// RE Benchmark TU 12021 of 20000 (depth=28, stamp="default")
namespace bench_tu_12021 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12021>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12021
