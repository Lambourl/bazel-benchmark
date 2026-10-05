#include "bench/fib.hpp"

// RE Benchmark TU 35 of 20000 (depth=28, stamp="default")
namespace bench_tu_35 {
constexpr unsigned long long result = ::bench::slow_fib<28, 35>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_35
