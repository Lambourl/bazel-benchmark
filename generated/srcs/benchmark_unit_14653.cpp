#include "bench/fib.hpp"

// RE Benchmark TU 14653 of 20000 (depth=28, stamp="default")
namespace bench_tu_14653 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14653>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14653
