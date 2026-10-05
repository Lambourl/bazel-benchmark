#include "bench/fib.hpp"

// RE Benchmark TU 56 of 20000 (depth=28, stamp="default")
namespace bench_tu_56 {
constexpr unsigned long long result = ::bench::slow_fib<28, 56>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_56
