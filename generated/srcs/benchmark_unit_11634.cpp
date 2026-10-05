#include "bench/fib.hpp"

// RE Benchmark TU 11634 of 20000 (depth=28, stamp="default")
namespace bench_tu_11634 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11634>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11634
