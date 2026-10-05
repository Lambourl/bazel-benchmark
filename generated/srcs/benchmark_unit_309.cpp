#include "bench/fib.hpp"

// RE Benchmark TU 309 of 20000 (depth=28, stamp="default")
namespace bench_tu_309 {
constexpr unsigned long long result = ::bench::slow_fib<28, 309>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_309
