#include "bench/fib.hpp"

// RE Benchmark TU 3548 of 20000 (depth=28, stamp="default")
namespace bench_tu_3548 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3548>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3548
