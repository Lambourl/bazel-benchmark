#include "bench/fib.hpp"

// RE Benchmark TU 3770 of 20000 (depth=28, stamp="default")
namespace bench_tu_3770 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3770>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3770
