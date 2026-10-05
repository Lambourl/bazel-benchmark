#include "bench/fib.hpp"

// RE Benchmark TU 5317 of 20000 (depth=28, stamp="default")
namespace bench_tu_5317 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5317>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5317
