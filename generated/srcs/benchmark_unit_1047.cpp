#include "bench/fib.hpp"

// RE Benchmark TU 1047 of 20000 (depth=28, stamp="default")
namespace bench_tu_1047 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1047>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1047
