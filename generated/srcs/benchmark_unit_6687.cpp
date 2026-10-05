#include "bench/fib.hpp"

// RE Benchmark TU 6687 of 20000 (depth=28, stamp="default")
namespace bench_tu_6687 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6687>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6687
