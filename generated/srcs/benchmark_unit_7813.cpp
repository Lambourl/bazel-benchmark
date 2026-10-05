#include "bench/fib.hpp"

// RE Benchmark TU 7813 of 20000 (depth=28, stamp="default")
namespace bench_tu_7813 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7813>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7813
