#include "bench/fib.hpp"

// RE Benchmark TU 12028 of 20000 (depth=28, stamp="default")
namespace bench_tu_12028 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12028>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12028
