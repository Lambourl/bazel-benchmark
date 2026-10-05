#include "bench/fib.hpp"

// RE Benchmark TU 48 of 20000 (depth=28, stamp="default")
namespace bench_tu_48 {
constexpr unsigned long long result = ::bench::slow_fib<28, 48>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_48
