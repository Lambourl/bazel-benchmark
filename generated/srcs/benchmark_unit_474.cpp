#include "bench/fib.hpp"

// RE Benchmark TU 474 of 20000 (depth=28, stamp="default")
namespace bench_tu_474 {
constexpr unsigned long long result = ::bench::slow_fib<28, 474>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_474
