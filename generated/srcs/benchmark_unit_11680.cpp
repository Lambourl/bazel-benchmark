#include "bench/fib.hpp"

// RE Benchmark TU 11680 of 20000 (depth=28, stamp="default")
namespace bench_tu_11680 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11680>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11680
