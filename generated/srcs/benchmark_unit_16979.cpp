#include "bench/fib.hpp"

// RE Benchmark TU 16979 of 20000 (depth=28, stamp="default")
namespace bench_tu_16979 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16979>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16979
