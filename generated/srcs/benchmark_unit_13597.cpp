#include "bench/fib.hpp"

// RE Benchmark TU 13597 of 20000 (depth=28, stamp="default")
namespace bench_tu_13597 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13597>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13597
