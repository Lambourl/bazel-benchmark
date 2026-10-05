#include "bench/fib.hpp"

// RE Benchmark TU 19407 of 20000 (depth=28, stamp="default")
namespace bench_tu_19407 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19407>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19407
