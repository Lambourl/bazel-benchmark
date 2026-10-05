#include "bench/fib.hpp"

// RE Benchmark TU 19045 of 20000 (depth=28, stamp="default")
namespace bench_tu_19045 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19045>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19045
