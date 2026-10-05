#include "bench/fib.hpp"

// RE Benchmark TU 1576 of 20000 (depth=28, stamp="default")
namespace bench_tu_1576 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1576>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1576
