#include "bench/fib.hpp"

// RE Benchmark TU 1138 of 20000 (depth=28, stamp="default")
namespace bench_tu_1138 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1138>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1138
