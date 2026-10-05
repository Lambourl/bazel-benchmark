#include "bench/fib.hpp"

// RE Benchmark TU 5767 of 20000 (depth=28, stamp="default")
namespace bench_tu_5767 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5767>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5767
