#include "bench/fib.hpp"

// RE Benchmark TU 14939 of 20000 (depth=28, stamp="default")
namespace bench_tu_14939 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14939>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14939
