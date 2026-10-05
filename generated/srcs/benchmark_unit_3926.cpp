#include "bench/fib.hpp"

// RE Benchmark TU 3926 of 20000 (depth=28, stamp="default")
namespace bench_tu_3926 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3926>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3926
