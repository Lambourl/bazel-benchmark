#include "bench/fib.hpp"

// RE Benchmark TU 16422 of 20000 (depth=28, stamp="default")
namespace bench_tu_16422 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16422>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16422
