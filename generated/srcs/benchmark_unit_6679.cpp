#include "bench/fib.hpp"

// RE Benchmark TU 6679 of 20000 (depth=28, stamp="default")
namespace bench_tu_6679 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6679>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6679
