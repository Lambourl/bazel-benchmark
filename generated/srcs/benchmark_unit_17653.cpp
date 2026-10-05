#include "bench/fib.hpp"

// RE Benchmark TU 17653 of 20000 (depth=28, stamp="default")
namespace bench_tu_17653 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17653>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17653
