#include "bench/fib.hpp"

// RE Benchmark TU 545 of 20000 (depth=28, stamp="default")
namespace bench_tu_545 {
constexpr unsigned long long result = ::bench::slow_fib<28, 545>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_545
