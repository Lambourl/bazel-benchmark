#include "bench/fib.hpp"

// RE Benchmark TU 5489 of 20000 (depth=28, stamp="default")
namespace bench_tu_5489 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5489>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5489
