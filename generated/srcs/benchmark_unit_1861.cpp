#include "bench/fib.hpp"

// RE Benchmark TU 1861 of 20000 (depth=28, stamp="default")
namespace bench_tu_1861 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1861>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1861
