#include "bench/fib.hpp"

// RE Benchmark TU 7969 of 20000 (depth=28, stamp="default")
namespace bench_tu_7969 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7969>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7969
