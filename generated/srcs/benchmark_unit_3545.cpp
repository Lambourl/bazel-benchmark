#include "bench/fib.hpp"

// RE Benchmark TU 3545 of 20000 (depth=28, stamp="default")
namespace bench_tu_3545 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3545>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3545
