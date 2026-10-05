#include "bench/fib.hpp"

// RE Benchmark TU 15229 of 20000 (depth=28, stamp="default")
namespace bench_tu_15229 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15229>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15229
