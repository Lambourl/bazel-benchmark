#include "bench/fib.hpp"

// RE Benchmark TU 8599 of 20000 (depth=28, stamp="default")
namespace bench_tu_8599 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8599>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8599
