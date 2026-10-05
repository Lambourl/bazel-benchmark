#include "bench/fib.hpp"

// RE Benchmark TU 12895 of 20000 (depth=28, stamp="default")
namespace bench_tu_12895 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12895>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12895
