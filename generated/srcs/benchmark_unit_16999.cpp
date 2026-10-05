#include "bench/fib.hpp"

// RE Benchmark TU 16999 of 20000 (depth=28, stamp="default")
namespace bench_tu_16999 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16999>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16999
