#include "bench/fib.hpp"

// RE Benchmark TU 9785 of 20000 (depth=28, stamp="default")
namespace bench_tu_9785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9785
