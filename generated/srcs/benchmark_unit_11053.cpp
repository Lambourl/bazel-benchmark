#include "bench/fib.hpp"

// RE Benchmark TU 11053 of 20000 (depth=28, stamp="default")
namespace bench_tu_11053 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11053>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11053
