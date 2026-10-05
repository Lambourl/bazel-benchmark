#include "bench/fib.hpp"

// RE Benchmark TU 14228 of 20000 (depth=28, stamp="default")
namespace bench_tu_14228 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14228>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14228
