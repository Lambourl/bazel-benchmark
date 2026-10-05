#include "bench/fib.hpp"

// RE Benchmark TU 838 of 20000 (depth=28, stamp="default")
namespace bench_tu_838 {
constexpr unsigned long long result = ::bench::slow_fib<28, 838>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_838
