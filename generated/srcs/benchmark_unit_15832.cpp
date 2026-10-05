#include "bench/fib.hpp"

// RE Benchmark TU 15832 of 20000 (depth=28, stamp="default")
namespace bench_tu_15832 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15832>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15832
