#include "bench/fib.hpp"

// RE Benchmark TU 449 of 20000 (depth=28, stamp="default")
namespace bench_tu_449 {
constexpr unsigned long long result = ::bench::slow_fib<28, 449>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_449
