#include "bench/fib.hpp"

// RE Benchmark TU 10253 of 20000 (depth=28, stamp="default")
namespace bench_tu_10253 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10253>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10253
