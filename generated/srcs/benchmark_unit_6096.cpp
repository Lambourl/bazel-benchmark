#include "bench/fib.hpp"

// RE Benchmark TU 6096 of 20000 (depth=28, stamp="default")
namespace bench_tu_6096 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6096>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6096
