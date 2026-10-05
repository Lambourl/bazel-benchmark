#include "bench/fib.hpp"

// RE Benchmark TU 10406 of 20000 (depth=28, stamp="default")
namespace bench_tu_10406 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10406>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10406
