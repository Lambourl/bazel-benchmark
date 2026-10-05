#include "bench/fib.hpp"

// RE Benchmark TU 8927 of 20000 (depth=28, stamp="default")
namespace bench_tu_8927 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8927>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8927
