#include "bench/fib.hpp"

// RE Benchmark TU 7751 of 20000 (depth=28, stamp="default")
namespace bench_tu_7751 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7751>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7751
