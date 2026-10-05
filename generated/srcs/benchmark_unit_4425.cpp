#include "bench/fib.hpp"

// RE Benchmark TU 4425 of 20000 (depth=28, stamp="default")
namespace bench_tu_4425 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4425>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4425
