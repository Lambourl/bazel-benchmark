#include "bench/fib.hpp"

// RE Benchmark TU 1169 of 20000 (depth=28, stamp="default")
namespace bench_tu_1169 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1169>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1169
