#include "bench/fib.hpp"

// RE Benchmark TU 12647 of 20000 (depth=28, stamp="default")
namespace bench_tu_12647 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12647>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12647
