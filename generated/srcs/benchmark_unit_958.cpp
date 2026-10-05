#include "bench/fib.hpp"

// RE Benchmark TU 958 of 20000 (depth=28, stamp="default")
namespace bench_tu_958 {
constexpr unsigned long long result = ::bench::slow_fib<28, 958>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_958
