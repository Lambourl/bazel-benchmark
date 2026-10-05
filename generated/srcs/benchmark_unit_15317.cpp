#include "bench/fib.hpp"

// RE Benchmark TU 15317 of 20000 (depth=28, stamp="default")
namespace bench_tu_15317 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15317>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15317
