#include "bench/fib.hpp"

// RE Benchmark TU 7418 of 20000 (depth=28, stamp="default")
namespace bench_tu_7418 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7418>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7418
