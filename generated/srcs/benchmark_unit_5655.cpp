#include "bench/fib.hpp"

// RE Benchmark TU 5655 of 20000 (depth=28, stamp="default")
namespace bench_tu_5655 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5655>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5655
