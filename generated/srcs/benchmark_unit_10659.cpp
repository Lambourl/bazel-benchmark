#include "bench/fib.hpp"

// RE Benchmark TU 10659 of 20000 (depth=28, stamp="default")
namespace bench_tu_10659 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10659>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10659
