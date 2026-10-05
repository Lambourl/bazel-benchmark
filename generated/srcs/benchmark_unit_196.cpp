#include "bench/fib.hpp"

// RE Benchmark TU 196 of 20000 (depth=28, stamp="default")
namespace bench_tu_196 {
constexpr unsigned long long result = ::bench::slow_fib<28, 196>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_196
