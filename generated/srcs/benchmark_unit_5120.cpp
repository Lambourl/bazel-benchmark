#include "bench/fib.hpp"

// RE Benchmark TU 5120 of 20000 (depth=28, stamp="default")
namespace bench_tu_5120 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5120>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5120
