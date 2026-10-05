#include "bench/fib.hpp"

// RE Benchmark TU 17615 of 20000 (depth=28, stamp="default")
namespace bench_tu_17615 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17615>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17615
