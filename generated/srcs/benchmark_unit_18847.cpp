#include "bench/fib.hpp"

// RE Benchmark TU 18847 of 20000 (depth=28, stamp="default")
namespace bench_tu_18847 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18847>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18847
