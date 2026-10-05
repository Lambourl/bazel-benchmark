#include "bench/fib.hpp"

// RE Benchmark TU 17510 of 20000 (depth=28, stamp="default")
namespace bench_tu_17510 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17510>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17510
