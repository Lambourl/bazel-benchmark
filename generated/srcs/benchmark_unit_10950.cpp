#include "bench/fib.hpp"

// RE Benchmark TU 10950 of 20000 (depth=28, stamp="default")
namespace bench_tu_10950 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10950>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10950
