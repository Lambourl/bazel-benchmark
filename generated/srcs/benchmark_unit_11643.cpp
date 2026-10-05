#include "bench/fib.hpp"

// RE Benchmark TU 11643 of 20000 (depth=28, stamp="default")
namespace bench_tu_11643 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11643>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11643
