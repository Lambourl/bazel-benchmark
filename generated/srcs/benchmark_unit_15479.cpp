#include "bench/fib.hpp"

// RE Benchmark TU 15479 of 20000 (depth=28, stamp="default")
namespace bench_tu_15479 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15479>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15479
