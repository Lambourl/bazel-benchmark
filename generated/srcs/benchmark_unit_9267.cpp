#include "bench/fib.hpp"

// RE Benchmark TU 9267 of 20000 (depth=28, stamp="default")
namespace bench_tu_9267 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9267>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9267
