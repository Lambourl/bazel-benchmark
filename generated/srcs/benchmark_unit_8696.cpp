#include "bench/fib.hpp"

// RE Benchmark TU 8696 of 20000 (depth=28, stamp="default")
namespace bench_tu_8696 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8696>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8696
