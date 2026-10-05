#include "bench/fib.hpp"

// RE Benchmark TU 6422 of 20000 (depth=28, stamp="default")
namespace bench_tu_6422 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6422>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6422
