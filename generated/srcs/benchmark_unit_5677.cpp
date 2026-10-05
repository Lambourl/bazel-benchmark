#include "bench/fib.hpp"

// RE Benchmark TU 5677 of 20000 (depth=28, stamp="default")
namespace bench_tu_5677 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5677>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5677
