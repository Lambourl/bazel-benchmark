#include "bench/fib.hpp"

// RE Benchmark TU 13049 of 20000 (depth=28, stamp="default")
namespace bench_tu_13049 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13049>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13049
