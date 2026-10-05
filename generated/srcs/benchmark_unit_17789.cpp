#include "bench/fib.hpp"

// RE Benchmark TU 17789 of 20000 (depth=28, stamp="default")
namespace bench_tu_17789 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17789>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17789
