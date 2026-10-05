#include "bench/fib.hpp"

// RE Benchmark TU 30 of 20000 (depth=28, stamp="default")
namespace bench_tu_30 {
constexpr unsigned long long result = ::bench::slow_fib<28, 30>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_30
