#include "bench/fib.hpp"

// RE Benchmark TU 17593 of 20000 (depth=28, stamp="default")
namespace bench_tu_17593 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17593>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17593
