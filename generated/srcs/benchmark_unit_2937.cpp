#include "bench/fib.hpp"

// RE Benchmark TU 2937 of 20000 (depth=28, stamp="default")
namespace bench_tu_2937 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2937>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2937
