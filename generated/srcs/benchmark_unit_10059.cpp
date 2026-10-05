#include "bench/fib.hpp"

// RE Benchmark TU 10059 of 20000 (depth=28, stamp="default")
namespace bench_tu_10059 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10059>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10059
