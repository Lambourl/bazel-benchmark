#include "bench/fib.hpp"

// RE Benchmark TU 593 of 20000 (depth=28, stamp="default")
namespace bench_tu_593 {
constexpr unsigned long long result = ::bench::slow_fib<28, 593>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_593
