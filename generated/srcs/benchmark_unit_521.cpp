#include "bench/fib.hpp"

// RE Benchmark TU 521 of 20000 (depth=28, stamp="default")
namespace bench_tu_521 {
constexpr unsigned long long result = ::bench::slow_fib<28, 521>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_521
