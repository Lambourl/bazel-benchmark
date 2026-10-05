#include "bench/fib.hpp"

// RE Benchmark TU 337 of 20000 (depth=28, stamp="default")
namespace bench_tu_337 {
constexpr unsigned long long result = ::bench::slow_fib<28, 337>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_337
