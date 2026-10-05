#include "bench/fib.hpp"

// RE Benchmark TU 2950 of 20000 (depth=28, stamp="default")
namespace bench_tu_2950 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2950>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2950
