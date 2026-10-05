#include "bench/fib.hpp"

// RE Benchmark TU 13992 of 20000 (depth=28, stamp="default")
namespace bench_tu_13992 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13992>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13992
