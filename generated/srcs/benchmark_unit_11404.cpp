#include "bench/fib.hpp"

// RE Benchmark TU 11404 of 20000 (depth=28, stamp="default")
namespace bench_tu_11404 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11404>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11404
