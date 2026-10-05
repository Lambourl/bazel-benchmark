#include "bench/fib.hpp"

// RE Benchmark TU 3273 of 20000 (depth=28, stamp="default")
namespace bench_tu_3273 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3273>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3273
