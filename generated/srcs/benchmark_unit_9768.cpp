#include "bench/fib.hpp"

// RE Benchmark TU 9768 of 20000 (depth=28, stamp="default")
namespace bench_tu_9768 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9768>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9768
