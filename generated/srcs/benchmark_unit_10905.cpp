#include "bench/fib.hpp"

// RE Benchmark TU 10905 of 20000 (depth=28, stamp="default")
namespace bench_tu_10905 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10905>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10905
