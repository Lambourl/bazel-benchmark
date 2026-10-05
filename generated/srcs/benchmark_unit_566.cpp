#include "bench/fib.hpp"

// RE Benchmark TU 566 of 20000 (depth=28, stamp="default")
namespace bench_tu_566 {
constexpr unsigned long long result = ::bench::slow_fib<28, 566>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_566
