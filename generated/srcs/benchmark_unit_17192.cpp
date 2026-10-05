#include "bench/fib.hpp"

// RE Benchmark TU 17192 of 20000 (depth=28, stamp="default")
namespace bench_tu_17192 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17192>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17192
