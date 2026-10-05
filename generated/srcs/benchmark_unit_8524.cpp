#include "bench/fib.hpp"

// RE Benchmark TU 8524 of 20000 (depth=28, stamp="default")
namespace bench_tu_8524 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8524>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8524
