#include "bench/fib.hpp"

// RE Benchmark TU 15495 of 20000 (depth=28, stamp="default")
namespace bench_tu_15495 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15495>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15495
