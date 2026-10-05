#include "bench/fib.hpp"

// RE Benchmark TU 15631 of 20000 (depth=28, stamp="default")
namespace bench_tu_15631 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15631>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15631
