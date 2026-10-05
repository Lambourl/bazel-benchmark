#include "bench/fib.hpp"

// RE Benchmark TU 8473 of 20000 (depth=28, stamp="default")
namespace bench_tu_8473 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8473>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8473
