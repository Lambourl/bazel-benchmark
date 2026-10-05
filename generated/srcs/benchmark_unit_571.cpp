#include "bench/fib.hpp"

// RE Benchmark TU 571 of 20000 (depth=28, stamp="default")
namespace bench_tu_571 {
constexpr unsigned long long result = ::bench::slow_fib<28, 571>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_571
