#include "bench/fib.hpp"

// RE Benchmark TU 12009 of 20000 (depth=28, stamp="default")
namespace bench_tu_12009 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12009>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12009
