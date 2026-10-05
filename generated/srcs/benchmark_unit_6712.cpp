#include "bench/fib.hpp"

// RE Benchmark TU 6712 of 20000 (depth=28, stamp="default")
namespace bench_tu_6712 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6712>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6712
