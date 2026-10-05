#include "bench/fib.hpp"

// RE Benchmark TU 15117 of 20000 (depth=28, stamp="default")
namespace bench_tu_15117 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15117>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15117
