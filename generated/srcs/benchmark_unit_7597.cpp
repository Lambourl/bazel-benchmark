#include "bench/fib.hpp"

// RE Benchmark TU 7597 of 20000 (depth=28, stamp="default")
namespace bench_tu_7597 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7597>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7597
