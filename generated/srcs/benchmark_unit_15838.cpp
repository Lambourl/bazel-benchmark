#include "bench/fib.hpp"

// RE Benchmark TU 15838 of 20000 (depth=28, stamp="default")
namespace bench_tu_15838 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15838>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15838
