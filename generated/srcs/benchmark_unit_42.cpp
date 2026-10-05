#include "bench/fib.hpp"

// RE Benchmark TU 42 of 20000 (depth=28, stamp="default")
namespace bench_tu_42 {
constexpr unsigned long long result = ::bench::slow_fib<28, 42>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_42
