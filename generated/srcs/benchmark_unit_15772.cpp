#include "bench/fib.hpp"

// RE Benchmark TU 15772 of 20000 (depth=28, stamp="default")
namespace bench_tu_15772 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15772>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15772
