#include "bench/fib.hpp"

// RE Benchmark TU 19329 of 20000 (depth=28, stamp="default")
namespace bench_tu_19329 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19329>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19329
