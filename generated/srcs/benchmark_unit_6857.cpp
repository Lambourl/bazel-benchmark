#include "bench/fib.hpp"

// RE Benchmark TU 6857 of 20000 (depth=28, stamp="default")
namespace bench_tu_6857 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6857>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6857
