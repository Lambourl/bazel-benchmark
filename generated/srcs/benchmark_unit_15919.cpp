#include "bench/fib.hpp"

// RE Benchmark TU 15919 of 20000 (depth=28, stamp="default")
namespace bench_tu_15919 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15919>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15919
