#include "bench/fib.hpp"

// RE Benchmark TU 16953 of 20000 (depth=28, stamp="default")
namespace bench_tu_16953 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16953>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16953
