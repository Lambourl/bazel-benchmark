#include "bench/fib.hpp"

// RE Benchmark TU 9774 of 20000 (depth=28, stamp="default")
namespace bench_tu_9774 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9774>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9774
