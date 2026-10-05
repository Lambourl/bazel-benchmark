#include "bench/fib.hpp"

// RE Benchmark TU 16444 of 20000 (depth=28, stamp="default")
namespace bench_tu_16444 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16444>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16444
