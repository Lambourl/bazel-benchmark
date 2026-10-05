#include "bench/fib.hpp"

// RE Benchmark TU 5155 of 20000 (depth=28, stamp="default")
namespace bench_tu_5155 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5155>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5155
