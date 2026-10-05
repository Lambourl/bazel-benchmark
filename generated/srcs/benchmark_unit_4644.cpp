#include "bench/fib.hpp"

// RE Benchmark TU 4644 of 20000 (depth=28, stamp="default")
namespace bench_tu_4644 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4644>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4644
