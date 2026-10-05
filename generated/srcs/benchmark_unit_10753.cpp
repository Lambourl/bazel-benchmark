#include "bench/fib.hpp"

// RE Benchmark TU 10753 of 20000 (depth=28, stamp="default")
namespace bench_tu_10753 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10753>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10753
