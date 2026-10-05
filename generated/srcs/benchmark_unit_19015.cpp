#include "bench/fib.hpp"

// RE Benchmark TU 19015 of 20000 (depth=28, stamp="default")
namespace bench_tu_19015 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19015>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19015
