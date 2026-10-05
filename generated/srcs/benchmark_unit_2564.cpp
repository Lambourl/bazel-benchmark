#include "bench/fib.hpp"

// RE Benchmark TU 2564 of 20000 (depth=28, stamp="default")
namespace bench_tu_2564 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2564>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2564
