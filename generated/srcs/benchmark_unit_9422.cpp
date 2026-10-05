#include "bench/fib.hpp"

// RE Benchmark TU 9422 of 20000 (depth=28, stamp="default")
namespace bench_tu_9422 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9422>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9422
