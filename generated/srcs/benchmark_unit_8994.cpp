#include "bench/fib.hpp"

// RE Benchmark TU 8994 of 20000 (depth=28, stamp="default")
namespace bench_tu_8994 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8994>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8994
