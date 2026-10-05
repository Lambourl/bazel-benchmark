#include "bench/fib.hpp"

// RE Benchmark TU 38 of 20000 (depth=28, stamp="default")
namespace bench_tu_38 {
constexpr unsigned long long result = ::bench::slow_fib<28, 38>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_38
