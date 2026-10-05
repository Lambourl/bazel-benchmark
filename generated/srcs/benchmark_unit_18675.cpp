#include "bench/fib.hpp"

// RE Benchmark TU 18675 of 20000 (depth=28, stamp="default")
namespace bench_tu_18675 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18675>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18675
