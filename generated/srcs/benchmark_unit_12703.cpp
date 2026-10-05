#include "bench/fib.hpp"

// RE Benchmark TU 12703 of 20000 (depth=28, stamp="default")
namespace bench_tu_12703 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12703>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12703
