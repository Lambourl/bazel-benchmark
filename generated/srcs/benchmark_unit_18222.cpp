#include "bench/fib.hpp"

// RE Benchmark TU 18222 of 20000 (depth=28, stamp="default")
namespace bench_tu_18222 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18222>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18222
