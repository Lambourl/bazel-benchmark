#include "bench/fib.hpp"

// RE Benchmark TU 6838 of 20000 (depth=28, stamp="default")
namespace bench_tu_6838 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6838>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6838
