#include "bench/fib.hpp"

// RE Benchmark TU 19247 of 20000 (depth=28, stamp="default")
namespace bench_tu_19247 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19247>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19247
