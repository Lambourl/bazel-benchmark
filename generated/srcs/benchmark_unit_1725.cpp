#include "bench/fib.hpp"

// RE Benchmark TU 1725 of 20000 (depth=28, stamp="default")
namespace bench_tu_1725 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1725>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1725
