#include "bench/fib.hpp"

// RE Benchmark TU 5001 of 20000 (depth=28, stamp="default")
namespace bench_tu_5001 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5001>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5001
