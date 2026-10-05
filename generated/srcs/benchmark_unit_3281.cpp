#include "bench/fib.hpp"

// RE Benchmark TU 3281 of 20000 (depth=28, stamp="default")
namespace bench_tu_3281 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3281>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3281
