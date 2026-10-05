#include "bench/fib.hpp"

// RE Benchmark TU 5920 of 20000 (depth=28, stamp="default")
namespace bench_tu_5920 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5920>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5920
