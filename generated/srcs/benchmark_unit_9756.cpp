#include "bench/fib.hpp"

// RE Benchmark TU 9756 of 20000 (depth=28, stamp="default")
namespace bench_tu_9756 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9756>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9756
