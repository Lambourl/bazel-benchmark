#include "bench/fib.hpp"

// RE Benchmark TU 20 of 20000 (depth=28, stamp="default")
namespace bench_tu_20 {
constexpr unsigned long long result = ::bench::slow_fib<28, 20>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_20
