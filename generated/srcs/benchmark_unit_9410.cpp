#include "bench/fib.hpp"

// RE Benchmark TU 9410 of 20000 (depth=28, stamp="default")
namespace bench_tu_9410 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9410>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9410
