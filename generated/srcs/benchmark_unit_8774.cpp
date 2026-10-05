#include "bench/fib.hpp"

// RE Benchmark TU 8774 of 20000 (depth=28, stamp="default")
namespace bench_tu_8774 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8774>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8774
