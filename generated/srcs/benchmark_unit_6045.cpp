#include "bench/fib.hpp"

// RE Benchmark TU 6045 of 20000 (depth=28, stamp="default")
namespace bench_tu_6045 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6045>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6045
