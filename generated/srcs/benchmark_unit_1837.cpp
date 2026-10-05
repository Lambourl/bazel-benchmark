#include "bench/fib.hpp"

// RE Benchmark TU 1837 of 20000 (depth=28, stamp="default")
namespace bench_tu_1837 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1837>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1837
