#include "bench/fib.hpp"

// RE Benchmark TU 14680 of 20000 (depth=28, stamp="default")
namespace bench_tu_14680 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14680>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14680
