#include "bench/fib.hpp"

// RE Benchmark TU 17204 of 20000 (depth=28, stamp="default")
namespace bench_tu_17204 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17204>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17204
