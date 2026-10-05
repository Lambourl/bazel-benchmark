#include "bench/fib.hpp"

// RE Benchmark TU 18982 of 20000 (depth=28, stamp="default")
namespace bench_tu_18982 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18982>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18982
