#include "bench/fib.hpp"

// RE Benchmark TU 15746 of 20000 (depth=28, stamp="default")
namespace bench_tu_15746 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15746>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15746
