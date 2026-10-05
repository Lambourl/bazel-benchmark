#include "bench/fib.hpp"

// RE Benchmark TU 299 of 20000 (depth=28, stamp="default")
namespace bench_tu_299 {
constexpr unsigned long long result = ::bench::slow_fib<28, 299>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_299
