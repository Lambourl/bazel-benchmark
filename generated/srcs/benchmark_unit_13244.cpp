#include "bench/fib.hpp"

// RE Benchmark TU 13244 of 20000 (depth=28, stamp="default")
namespace bench_tu_13244 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13244>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13244
