#include "bench/fib.hpp"

// RE Benchmark TU 4004 of 20000 (depth=28, stamp="default")
namespace bench_tu_4004 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4004>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4004
