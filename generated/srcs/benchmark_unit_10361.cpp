#include "bench/fib.hpp"

// RE Benchmark TU 10361 of 20000 (depth=28, stamp="default")
namespace bench_tu_10361 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10361>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10361
