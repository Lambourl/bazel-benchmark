#include "bench/fib.hpp"

// RE Benchmark TU 8662 of 20000 (depth=28, stamp="default")
namespace bench_tu_8662 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8662>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8662
