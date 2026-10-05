#include "bench/fib.hpp"

// RE Benchmark TU 3229 of 20000 (depth=28, stamp="default")
namespace bench_tu_3229 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3229>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3229
