#include "bench/fib.hpp"

// RE Benchmark TU 2913 of 20000 (depth=28, stamp="default")
namespace bench_tu_2913 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2913>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2913
