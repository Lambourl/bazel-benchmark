#include "bench/fib.hpp"

// RE Benchmark TU 16387 of 20000 (depth=28, stamp="default")
namespace bench_tu_16387 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16387>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16387
