#include "bench/fib.hpp"

// RE Benchmark TU 8479 of 20000 (depth=28, stamp="default")
namespace bench_tu_8479 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8479>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8479
