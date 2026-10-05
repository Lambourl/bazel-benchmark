#include "bench/fib.hpp"

// RE Benchmark TU 13800 of 20000 (depth=28, stamp="default")
namespace bench_tu_13800 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13800>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13800
