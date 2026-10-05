#include "bench/fib.hpp"

// RE Benchmark TU 6473 of 20000 (depth=28, stamp="default")
namespace bench_tu_6473 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6473>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6473
