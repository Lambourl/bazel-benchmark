#include "bench/fib.hpp"

// RE Benchmark TU 17682 of 20000 (depth=28, stamp="default")
namespace bench_tu_17682 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17682>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17682
