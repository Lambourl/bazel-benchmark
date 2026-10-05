#include "bench/fib.hpp"

// RE Benchmark TU 5097 of 20000 (depth=28, stamp="default")
namespace bench_tu_5097 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5097>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5097
