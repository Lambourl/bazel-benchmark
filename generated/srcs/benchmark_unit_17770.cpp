#include "bench/fib.hpp"

// RE Benchmark TU 17770 of 20000 (depth=28, stamp="default")
namespace bench_tu_17770 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17770>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17770
