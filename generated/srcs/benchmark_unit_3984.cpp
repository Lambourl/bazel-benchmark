#include "bench/fib.hpp"

// RE Benchmark TU 3984 of 20000 (depth=28, stamp="default")
namespace bench_tu_3984 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3984>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3984
