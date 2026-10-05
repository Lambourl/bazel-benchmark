#include "bench/fib.hpp"

// RE Benchmark TU 7410 of 20000 (depth=28, stamp="default")
namespace bench_tu_7410 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7410>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7410
