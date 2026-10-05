#include "bench/fib.hpp"

// RE Benchmark TU 13489 of 20000 (depth=28, stamp="default")
namespace bench_tu_13489 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13489>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13489
