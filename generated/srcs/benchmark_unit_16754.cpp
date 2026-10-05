#include "bench/fib.hpp"

// RE Benchmark TU 16754 of 20000 (depth=28, stamp="default")
namespace bench_tu_16754 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16754>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16754
