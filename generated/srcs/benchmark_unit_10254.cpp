#include "bench/fib.hpp"

// RE Benchmark TU 10254 of 20000 (depth=28, stamp="default")
namespace bench_tu_10254 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10254>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10254
