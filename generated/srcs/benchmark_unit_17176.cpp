#include "bench/fib.hpp"

// RE Benchmark TU 17176 of 20000 (depth=28, stamp="default")
namespace bench_tu_17176 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17176>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17176
