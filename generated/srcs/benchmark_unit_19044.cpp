#include "bench/fib.hpp"

// RE Benchmark TU 19044 of 20000 (depth=28, stamp="default")
namespace bench_tu_19044 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19044>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19044
