#include "bench/fib.hpp"

// RE Benchmark TU 1425 of 20000 (depth=28, stamp="default")
namespace bench_tu_1425 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1425>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1425
