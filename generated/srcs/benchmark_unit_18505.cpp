#include "bench/fib.hpp"

// RE Benchmark TU 18505 of 20000 (depth=28, stamp="default")
namespace bench_tu_18505 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18505>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18505
