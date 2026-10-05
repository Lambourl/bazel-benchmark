#include "bench/fib.hpp"

// RE Benchmark TU 146 of 20000 (depth=28, stamp="default")
namespace bench_tu_146 {
constexpr unsigned long long result = ::bench::slow_fib<28, 146>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_146
