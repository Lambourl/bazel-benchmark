#include "bench/fib.hpp"

// RE Benchmark TU 19387 of 20000 (depth=28, stamp="default")
namespace bench_tu_19387 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19387>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19387
