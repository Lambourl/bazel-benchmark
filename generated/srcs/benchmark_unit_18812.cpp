#include "bench/fib.hpp"

// RE Benchmark TU 18812 of 20000 (depth=28, stamp="default")
namespace bench_tu_18812 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18812>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18812
