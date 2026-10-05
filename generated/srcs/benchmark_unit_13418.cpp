#include "bench/fib.hpp"

// RE Benchmark TU 13418 of 20000 (depth=28, stamp="default")
namespace bench_tu_13418 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13418>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13418
