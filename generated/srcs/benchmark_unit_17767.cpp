#include "bench/fib.hpp"

// RE Benchmark TU 17767 of 20000 (depth=28, stamp="default")
namespace bench_tu_17767 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17767>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17767
