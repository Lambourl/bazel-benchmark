#include "bench/fib.hpp"

// RE Benchmark TU 10631 of 20000 (depth=28, stamp="default")
namespace bench_tu_10631 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10631>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10631
