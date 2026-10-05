#include "bench/fib.hpp"

// RE Benchmark TU 14160 of 20000 (depth=28, stamp="default")
namespace bench_tu_14160 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14160>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14160
