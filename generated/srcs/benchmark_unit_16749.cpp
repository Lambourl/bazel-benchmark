#include "bench/fib.hpp"

// RE Benchmark TU 16749 of 20000 (depth=28, stamp="default")
namespace bench_tu_16749 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16749>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16749
