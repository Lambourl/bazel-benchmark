#include "bench/fib.hpp"

// RE Benchmark TU 9702 of 20000 (depth=28, stamp="default")
namespace bench_tu_9702 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9702>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9702
