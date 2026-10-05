#include "bench/fib.hpp"

// RE Benchmark TU 14209 of 20000 (depth=28, stamp="default")
namespace bench_tu_14209 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14209>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14209
