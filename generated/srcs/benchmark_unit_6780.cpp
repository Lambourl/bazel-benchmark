#include "bench/fib.hpp"

// RE Benchmark TU 6780 of 20000 (depth=28, stamp="default")
namespace bench_tu_6780 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6780>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6780
