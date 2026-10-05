#include "bench/fib.hpp"

// RE Benchmark TU 17812 of 20000 (depth=28, stamp="default")
namespace bench_tu_17812 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17812>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17812
