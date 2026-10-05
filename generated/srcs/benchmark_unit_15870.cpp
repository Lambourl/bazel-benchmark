#include "bench/fib.hpp"

// RE Benchmark TU 15870 of 20000 (depth=28, stamp="default")
namespace bench_tu_15870 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15870>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15870
