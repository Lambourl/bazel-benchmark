#include "bench/fib.hpp"

// RE Benchmark TU 19517 of 20000 (depth=28, stamp="default")
namespace bench_tu_19517 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19517>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19517
