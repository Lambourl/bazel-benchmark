#include "bench/fib.hpp"

// RE Benchmark TU 4548 of 20000 (depth=28, stamp="default")
namespace bench_tu_4548 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4548>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4548
