#include "bench/fib.hpp"

// RE Benchmark TU 6403 of 20000 (depth=28, stamp="default")
namespace bench_tu_6403 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6403>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6403
