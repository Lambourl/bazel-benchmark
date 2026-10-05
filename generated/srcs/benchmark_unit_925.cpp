#include "bench/fib.hpp"

// RE Benchmark TU 925 of 20000 (depth=28, stamp="default")
namespace bench_tu_925 {
constexpr unsigned long long result = ::bench::slow_fib<28, 925>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_925
