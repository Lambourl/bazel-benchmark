#include "bench/fib.hpp"

// RE Benchmark TU 18001 of 20000 (depth=28, stamp="default")
namespace bench_tu_18001 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18001>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18001
