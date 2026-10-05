#include "bench/fib.hpp"

// RE Benchmark TU 17178 of 20000 (depth=28, stamp="default")
namespace bench_tu_17178 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17178>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17178
