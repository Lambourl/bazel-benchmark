#include "bench/fib.hpp"

// RE Benchmark TU 15169 of 20000 (depth=28, stamp="default")
namespace bench_tu_15169 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15169>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15169
