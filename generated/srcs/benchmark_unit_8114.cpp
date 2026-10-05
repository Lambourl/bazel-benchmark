#include "bench/fib.hpp"

// RE Benchmark TU 8114 of 20000 (depth=28, stamp="default")
namespace bench_tu_8114 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8114>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8114
