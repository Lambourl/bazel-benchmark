#include "bench/fib.hpp"

// RE Benchmark TU 10276 of 20000 (depth=28, stamp="default")
namespace bench_tu_10276 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10276>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10276
