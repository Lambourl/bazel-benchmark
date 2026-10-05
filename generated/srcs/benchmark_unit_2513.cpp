#include "bench/fib.hpp"

// RE Benchmark TU 2513 of 20000 (depth=28, stamp="default")
namespace bench_tu_2513 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2513>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2513
