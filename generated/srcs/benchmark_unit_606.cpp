#include "bench/fib.hpp"

// RE Benchmark TU 606 of 20000 (depth=28, stamp="default")
namespace bench_tu_606 {
constexpr unsigned long long result = ::bench::slow_fib<28, 606>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_606
