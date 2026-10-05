#include "bench/fib.hpp"

// RE Benchmark TU 14744 of 20000 (depth=28, stamp="default")
namespace bench_tu_14744 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14744>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14744
