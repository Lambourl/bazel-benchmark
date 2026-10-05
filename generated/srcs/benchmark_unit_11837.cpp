#include "bench/fib.hpp"

// RE Benchmark TU 11837 of 20000 (depth=28, stamp="default")
namespace bench_tu_11837 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11837>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11837
