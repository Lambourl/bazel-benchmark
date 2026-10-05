#include "bench/fib.hpp"

// RE Benchmark TU 3253 of 20000 (depth=28, stamp="default")
namespace bench_tu_3253 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3253>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3253
