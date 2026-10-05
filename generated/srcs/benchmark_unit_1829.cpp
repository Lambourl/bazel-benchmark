#include "bench/fib.hpp"

// RE Benchmark TU 1829 of 20000 (depth=28, stamp="default")
namespace bench_tu_1829 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1829>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1829
