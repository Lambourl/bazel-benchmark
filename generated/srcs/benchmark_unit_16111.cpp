#include "bench/fib.hpp"

// RE Benchmark TU 16111 of 20000 (depth=28, stamp="default")
namespace bench_tu_16111 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16111>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16111
