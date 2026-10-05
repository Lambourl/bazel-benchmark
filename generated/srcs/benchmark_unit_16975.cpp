#include "bench/fib.hpp"

// RE Benchmark TU 16975 of 20000 (depth=28, stamp="default")
namespace bench_tu_16975 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16975>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16975
