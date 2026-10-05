#include "bench/fib.hpp"

// RE Benchmark TU 5240 of 20000 (depth=28, stamp="default")
namespace bench_tu_5240 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5240>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5240
