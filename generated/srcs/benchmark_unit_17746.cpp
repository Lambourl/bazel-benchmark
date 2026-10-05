#include "bench/fib.hpp"

// RE Benchmark TU 17746 of 20000 (depth=28, stamp="default")
namespace bench_tu_17746 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17746>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17746
