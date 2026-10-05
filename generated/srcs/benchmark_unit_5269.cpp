#include "bench/fib.hpp"

// RE Benchmark TU 5269 of 20000 (depth=28, stamp="default")
namespace bench_tu_5269 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5269>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5269
