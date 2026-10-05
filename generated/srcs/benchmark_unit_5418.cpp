#include "bench/fib.hpp"

// RE Benchmark TU 5418 of 20000 (depth=28, stamp="default")
namespace bench_tu_5418 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5418>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5418
