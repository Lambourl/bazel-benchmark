#include "bench/fib.hpp"

// RE Benchmark TU 9736 of 20000 (depth=28, stamp="default")
namespace bench_tu_9736 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9736>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9736
