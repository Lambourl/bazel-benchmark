#include "bench/fib.hpp"

// RE Benchmark TU 13047 of 20000 (depth=28, stamp="default")
namespace bench_tu_13047 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13047>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13047
