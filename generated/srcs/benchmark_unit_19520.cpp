#include "bench/fib.hpp"

// RE Benchmark TU 19520 of 20000 (depth=28, stamp="default")
namespace bench_tu_19520 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19520>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19520
