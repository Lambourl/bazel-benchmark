#include "bench/fib.hpp"

// RE Benchmark TU 14070 of 20000 (depth=28, stamp="default")
namespace bench_tu_14070 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14070>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14070
