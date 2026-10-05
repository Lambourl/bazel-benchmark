#include "bench/fib.hpp"

// RE Benchmark TU 13066 of 20000 (depth=28, stamp="default")
namespace bench_tu_13066 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13066>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13066
