#include "bench/fib.hpp"

// RE Benchmark TU 169 of 20000 (depth=28, stamp="default")
namespace bench_tu_169 {
constexpr unsigned long long result = ::bench::slow_fib<28, 169>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_169
