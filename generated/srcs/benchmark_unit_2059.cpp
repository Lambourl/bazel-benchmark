#include "bench/fib.hpp"

// RE Benchmark TU 2059 of 20000 (depth=28, stamp="default")
namespace bench_tu_2059 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2059>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2059
