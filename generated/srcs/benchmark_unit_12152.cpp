#include "bench/fib.hpp"

// RE Benchmark TU 12152 of 20000 (depth=28, stamp="default")
namespace bench_tu_12152 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12152>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12152
