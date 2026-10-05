#include "bench/fib.hpp"

// RE Benchmark TU 16308 of 20000 (depth=28, stamp="default")
namespace bench_tu_16308 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16308>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16308
