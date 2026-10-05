#include "bench/fib.hpp"

// RE Benchmark TU 7340 of 20000 (depth=28, stamp="default")
namespace bench_tu_7340 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7340>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7340
