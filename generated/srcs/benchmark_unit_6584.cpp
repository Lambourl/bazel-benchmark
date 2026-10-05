#include "bench/fib.hpp"

// RE Benchmark TU 6584 of 20000 (depth=28, stamp="default")
namespace bench_tu_6584 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6584>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6584
