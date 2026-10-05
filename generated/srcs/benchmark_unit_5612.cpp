#include "bench/fib.hpp"

// RE Benchmark TU 5612 of 20000 (depth=28, stamp="default")
namespace bench_tu_5612 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5612>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5612
