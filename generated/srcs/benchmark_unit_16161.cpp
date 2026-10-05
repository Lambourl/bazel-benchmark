#include "bench/fib.hpp"

// RE Benchmark TU 16161 of 20000 (depth=28, stamp="default")
namespace bench_tu_16161 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16161>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16161
