#include "bench/fib.hpp"

// RE Benchmark TU 9771 of 20000 (depth=28, stamp="default")
namespace bench_tu_9771 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9771>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9771
