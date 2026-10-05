#include "bench/fib.hpp"

// RE Benchmark TU 3280 of 20000 (depth=28, stamp="default")
namespace bench_tu_3280 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3280>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3280
