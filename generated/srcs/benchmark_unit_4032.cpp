#include "bench/fib.hpp"

// RE Benchmark TU 4032 of 20000 (depth=28, stamp="default")
namespace bench_tu_4032 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4032>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4032
