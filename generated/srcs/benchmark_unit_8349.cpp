#include "bench/fib.hpp"

// RE Benchmark TU 8349 of 20000 (depth=28, stamp="default")
namespace bench_tu_8349 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8349>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8349
