#include "bench/fib.hpp"

// RE Benchmark TU 11329 of 20000 (depth=28, stamp="default")
namespace bench_tu_11329 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11329>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11329
