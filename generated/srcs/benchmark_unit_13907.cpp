#include "bench/fib.hpp"

// RE Benchmark TU 13907 of 20000 (depth=28, stamp="default")
namespace bench_tu_13907 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13907>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13907
