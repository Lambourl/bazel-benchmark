#include "bench/fib.hpp"

// RE Benchmark TU 12011 of 20000 (depth=28, stamp="default")
namespace bench_tu_12011 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12011>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12011
