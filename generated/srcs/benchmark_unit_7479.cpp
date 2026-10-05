#include "bench/fib.hpp"

// RE Benchmark TU 7479 of 20000 (depth=28, stamp="default")
namespace bench_tu_7479 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7479>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7479
