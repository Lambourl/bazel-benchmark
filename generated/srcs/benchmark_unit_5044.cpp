#include "bench/fib.hpp"

// RE Benchmark TU 5044 of 20000 (depth=28, stamp="default")
namespace bench_tu_5044 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5044>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5044
