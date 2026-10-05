#include "bench/fib.hpp"

// RE Benchmark TU 18635 of 20000 (depth=28, stamp="default")
namespace bench_tu_18635 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18635>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18635
