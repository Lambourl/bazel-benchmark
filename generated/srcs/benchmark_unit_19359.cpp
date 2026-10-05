#include "bench/fib.hpp"

// RE Benchmark TU 19359 of 20000 (depth=28, stamp="default")
namespace bench_tu_19359 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19359>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19359
