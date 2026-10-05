#include "bench/fib.hpp"

// RE Benchmark TU 8587 of 20000 (depth=28, stamp="default")
namespace bench_tu_8587 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8587>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8587
