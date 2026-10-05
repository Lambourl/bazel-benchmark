#include "bench/fib.hpp"

// RE Benchmark TU 3897 of 20000 (depth=28, stamp="default")
namespace bench_tu_3897 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3897>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3897
