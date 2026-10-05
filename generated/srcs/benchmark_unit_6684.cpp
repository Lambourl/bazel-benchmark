#include "bench/fib.hpp"

// RE Benchmark TU 6684 of 20000 (depth=28, stamp="default")
namespace bench_tu_6684 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6684>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6684
