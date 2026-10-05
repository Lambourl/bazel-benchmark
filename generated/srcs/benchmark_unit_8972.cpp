#include "bench/fib.hpp"

// RE Benchmark TU 8972 of 20000 (depth=28, stamp="default")
namespace bench_tu_8972 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8972>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8972
