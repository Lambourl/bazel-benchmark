#include "bench/fib.hpp"

// RE Benchmark TU 19494 of 20000 (depth=28, stamp="default")
namespace bench_tu_19494 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19494>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19494
