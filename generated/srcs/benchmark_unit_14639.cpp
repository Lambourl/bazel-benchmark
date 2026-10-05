#include "bench/fib.hpp"

// RE Benchmark TU 14639 of 20000 (depth=28, stamp="default")
namespace bench_tu_14639 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14639>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14639
