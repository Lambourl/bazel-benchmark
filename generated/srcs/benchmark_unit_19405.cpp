#include "bench/fib.hpp"

// RE Benchmark TU 19405 of 20000 (depth=28, stamp="default")
namespace bench_tu_19405 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19405>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19405
