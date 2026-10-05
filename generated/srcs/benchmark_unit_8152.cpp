#include "bench/fib.hpp"

// RE Benchmark TU 8152 of 20000 (depth=28, stamp="default")
namespace bench_tu_8152 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8152>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8152
