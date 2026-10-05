#include "bench/fib.hpp"

// RE Benchmark TU 7994 of 20000 (depth=28, stamp="default")
namespace bench_tu_7994 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7994>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7994
