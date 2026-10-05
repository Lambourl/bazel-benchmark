#include "bench/fib.hpp"

// RE Benchmark TU 10870 of 20000 (depth=28, stamp="default")
namespace bench_tu_10870 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10870>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10870
