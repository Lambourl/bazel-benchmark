#include "bench/fib.hpp"

// RE Benchmark TU 901 of 20000 (depth=28, stamp="default")
namespace bench_tu_901 {
constexpr unsigned long long result = ::bench::slow_fib<28, 901>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_901
