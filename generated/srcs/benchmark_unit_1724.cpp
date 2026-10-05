#include "bench/fib.hpp"

// RE Benchmark TU 1724 of 20000 (depth=28, stamp="default")
namespace bench_tu_1724 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1724>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1724
