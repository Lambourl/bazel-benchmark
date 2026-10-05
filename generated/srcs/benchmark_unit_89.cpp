#include "bench/fib.hpp"

// RE Benchmark TU 89 of 20000 (depth=28, stamp="default")
namespace bench_tu_89 {
constexpr unsigned long long result = ::bench::slow_fib<28, 89>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_89
