#include "bench/fib.hpp"

// RE Benchmark TU 13446 of 20000 (depth=28, stamp="default")
namespace bench_tu_13446 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13446>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13446
