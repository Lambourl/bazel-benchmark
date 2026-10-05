#include "bench/fib.hpp"

// RE Benchmark TU 349 of 20000 (depth=28, stamp="default")
namespace bench_tu_349 {
constexpr unsigned long long result = ::bench::slow_fib<28, 349>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_349
