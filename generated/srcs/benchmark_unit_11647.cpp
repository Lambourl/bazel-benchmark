#include "bench/fib.hpp"

// RE Benchmark TU 11647 of 20000 (depth=28, stamp="default")
namespace bench_tu_11647 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11647>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11647
