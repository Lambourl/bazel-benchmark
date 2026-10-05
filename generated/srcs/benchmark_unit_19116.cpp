#include "bench/fib.hpp"

// RE Benchmark TU 19116 of 20000 (depth=28, stamp="default")
namespace bench_tu_19116 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19116>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19116
