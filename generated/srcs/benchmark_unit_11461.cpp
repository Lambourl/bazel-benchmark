#include "bench/fib.hpp"

// RE Benchmark TU 11461 of 20000 (depth=28, stamp="default")
namespace bench_tu_11461 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11461>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11461
