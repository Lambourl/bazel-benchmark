#include "bench/fib.hpp"

// RE Benchmark TU 12503 of 20000 (depth=28, stamp="default")
namespace bench_tu_12503 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12503>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12503
