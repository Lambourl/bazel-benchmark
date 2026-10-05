#include "bench/fib.hpp"

// RE Benchmark TU 13457 of 20000 (depth=28, stamp="default")
namespace bench_tu_13457 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13457>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13457
