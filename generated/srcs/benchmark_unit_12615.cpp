#include "bench/fib.hpp"

// RE Benchmark TU 12615 of 20000 (depth=28, stamp="default")
namespace bench_tu_12615 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12615>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12615
