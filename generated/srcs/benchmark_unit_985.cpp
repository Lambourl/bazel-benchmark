#include "bench/fib.hpp"

// RE Benchmark TU 985 of 20000 (depth=28, stamp="default")
namespace bench_tu_985 {
constexpr unsigned long long result = ::bench::slow_fib<28, 985>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_985
