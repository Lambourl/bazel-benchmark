#include "bench/fib.hpp"

// RE Benchmark TU 19186 of 20000 (depth=28, stamp="default")
namespace bench_tu_19186 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19186>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19186
