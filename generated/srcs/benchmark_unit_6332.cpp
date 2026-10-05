#include "bench/fib.hpp"

// RE Benchmark TU 6332 of 20000 (depth=28, stamp="default")
namespace bench_tu_6332 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6332>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6332
