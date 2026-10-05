#include "bench/fib.hpp"

// RE Benchmark TU 13903 of 20000 (depth=28, stamp="default")
namespace bench_tu_13903 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13903>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13903
