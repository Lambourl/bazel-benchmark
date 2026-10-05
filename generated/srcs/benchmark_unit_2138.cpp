#include "bench/fib.hpp"

// RE Benchmark TU 2138 of 20000 (depth=28, stamp="default")
namespace bench_tu_2138 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2138>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2138
