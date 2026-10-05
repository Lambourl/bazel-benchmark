#include "bench/fib.hpp"

// RE Benchmark TU 14149 of 20000 (depth=28, stamp="default")
namespace bench_tu_14149 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14149>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14149
