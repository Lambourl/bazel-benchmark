#include "bench/fib.hpp"

// RE Benchmark TU 2838 of 20000 (depth=28, stamp="default")
namespace bench_tu_2838 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2838>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2838
