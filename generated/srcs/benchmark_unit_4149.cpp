#include "bench/fib.hpp"

// RE Benchmark TU 4149 of 20000 (depth=28, stamp="default")
namespace bench_tu_4149 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4149>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4149
