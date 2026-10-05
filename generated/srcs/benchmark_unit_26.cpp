#include "bench/fib.hpp"

// RE Benchmark TU 26 of 20000 (depth=28, stamp="default")
namespace bench_tu_26 {
constexpr unsigned long long result = ::bench::slow_fib<28, 26>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_26
