#include "bench/fib.hpp"

// RE Benchmark TU 6927 of 20000 (depth=28, stamp="default")
namespace bench_tu_6927 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6927>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6927
