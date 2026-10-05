#include "bench/fib.hpp"

// RE Benchmark TU 5796 of 20000 (depth=28, stamp="default")
namespace bench_tu_5796 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5796>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5796
