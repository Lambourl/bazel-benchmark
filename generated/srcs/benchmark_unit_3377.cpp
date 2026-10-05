#include "bench/fib.hpp"

// RE Benchmark TU 3377 of 20000 (depth=28, stamp="default")
namespace bench_tu_3377 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3377>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3377
