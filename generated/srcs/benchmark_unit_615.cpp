#include "bench/fib.hpp"

// RE Benchmark TU 615 of 20000 (depth=28, stamp="default")
namespace bench_tu_615 {
constexpr unsigned long long result = ::bench::slow_fib<28, 615>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_615
