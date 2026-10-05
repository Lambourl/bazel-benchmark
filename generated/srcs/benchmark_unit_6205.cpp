#include "bench/fib.hpp"

// RE Benchmark TU 6205 of 20000 (depth=28, stamp="default")
namespace bench_tu_6205 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6205>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6205
