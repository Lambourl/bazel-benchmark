#include "bench/fib.hpp"

// RE Benchmark TU 16805 of 20000 (depth=28, stamp="default")
namespace bench_tu_16805 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16805>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16805
