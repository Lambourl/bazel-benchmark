#include "bench/fib.hpp"

// RE Benchmark TU 6631 of 20000 (depth=28, stamp="default")
namespace bench_tu_6631 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6631>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6631
