#include "bench/fib.hpp"

// RE Benchmark TU 15324 of 20000 (depth=28, stamp="default")
namespace bench_tu_15324 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15324>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15324
