#include "bench/fib.hpp"

// RE Benchmark TU 13100 of 20000 (depth=28, stamp="default")
namespace bench_tu_13100 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13100>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13100
