#include "bench/fib.hpp"

// RE Benchmark TU 13329 of 20000 (depth=28, stamp="default")
namespace bench_tu_13329 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13329>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13329
