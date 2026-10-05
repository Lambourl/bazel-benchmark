#include "bench/fib.hpp"

// RE Benchmark TU 11826 of 20000 (depth=28, stamp="default")
namespace bench_tu_11826 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11826>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11826
