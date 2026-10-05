#include "bench/fib.hpp"

// RE Benchmark TU 1028 of 20000 (depth=28, stamp="default")
namespace bench_tu_1028 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1028>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1028
