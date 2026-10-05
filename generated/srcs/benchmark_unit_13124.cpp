#include "bench/fib.hpp"

// RE Benchmark TU 13124 of 20000 (depth=28, stamp="default")
namespace bench_tu_13124 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13124>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13124
