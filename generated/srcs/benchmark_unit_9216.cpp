#include "bench/fib.hpp"

// RE Benchmark TU 9216 of 20000 (depth=28, stamp="default")
namespace bench_tu_9216 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9216>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9216
