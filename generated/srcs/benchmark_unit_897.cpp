#include "bench/fib.hpp"

// RE Benchmark TU 897 of 20000 (depth=28, stamp="default")
namespace bench_tu_897 {
constexpr unsigned long long result = ::bench::slow_fib<28, 897>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_897
