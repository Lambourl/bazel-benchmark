#include "bench/fib.hpp"

// RE Benchmark TU 10373 of 20000 (depth=28, stamp="default")
namespace bench_tu_10373 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10373>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10373
