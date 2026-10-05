#include "bench/fib.hpp"

// RE Benchmark TU 17409 of 20000 (depth=28, stamp="default")
namespace bench_tu_17409 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17409>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17409
