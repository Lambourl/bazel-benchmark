#include "bench/fib.hpp"

// RE Benchmark TU 4429 of 20000 (depth=28, stamp="default")
namespace bench_tu_4429 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4429>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4429
