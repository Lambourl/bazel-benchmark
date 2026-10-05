#include "bench/fib.hpp"

// RE Benchmark TU 18490 of 20000 (depth=28, stamp="default")
namespace bench_tu_18490 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18490>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18490
