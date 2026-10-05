#include "bench/fib.hpp"

// RE Benchmark TU 13491 of 20000 (depth=28, stamp="default")
namespace bench_tu_13491 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13491>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13491
