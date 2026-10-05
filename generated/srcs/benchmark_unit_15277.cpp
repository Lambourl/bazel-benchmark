#include "bench/fib.hpp"

// RE Benchmark TU 15277 of 20000 (depth=28, stamp="default")
namespace bench_tu_15277 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15277>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15277
