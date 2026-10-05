#include "bench/fib.hpp"

// RE Benchmark TU 7004 of 20000 (depth=28, stamp="default")
namespace bench_tu_7004 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7004>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7004
