#include "bench/fib.hpp"

// RE Benchmark TU 19796 of 20000 (depth=28, stamp="default")
namespace bench_tu_19796 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19796>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19796
