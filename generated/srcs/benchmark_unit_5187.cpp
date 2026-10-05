#include "bench/fib.hpp"

// RE Benchmark TU 5187 of 20000 (depth=28, stamp="default")
namespace bench_tu_5187 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5187>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5187
