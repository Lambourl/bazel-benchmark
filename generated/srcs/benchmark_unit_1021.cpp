#include "bench/fib.hpp"

// RE Benchmark TU 1021 of 20000 (depth=28, stamp="default")
namespace bench_tu_1021 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1021>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1021
