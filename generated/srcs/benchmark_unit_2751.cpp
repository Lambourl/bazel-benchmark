#include "bench/fib.hpp"

// RE Benchmark TU 2751 of 20000 (depth=28, stamp="default")
namespace bench_tu_2751 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2751>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2751
