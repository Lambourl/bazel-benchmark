#include "bench/fib.hpp"

// RE Benchmark TU 7300 of 20000 (depth=28, stamp="default")
namespace bench_tu_7300 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7300>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7300
