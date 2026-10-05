#include "bench/fib.hpp"

// RE Benchmark TU 1885 of 20000 (depth=28, stamp="default")
namespace bench_tu_1885 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1885>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1885
