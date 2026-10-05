#include "bench/fib.hpp"

// RE Benchmark TU 4335 of 20000 (depth=28, stamp="default")
namespace bench_tu_4335 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4335>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4335
