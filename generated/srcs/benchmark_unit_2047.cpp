#include "bench/fib.hpp"

// RE Benchmark TU 2047 of 20000 (depth=28, stamp="default")
namespace bench_tu_2047 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2047>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2047
