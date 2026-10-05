#include "bench/fib.hpp"

// RE Benchmark TU 14792 of 20000 (depth=28, stamp="default")
namespace bench_tu_14792 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14792>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14792
