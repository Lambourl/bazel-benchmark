#include "bench/fib.hpp"

// RE Benchmark TU 15222 of 20000 (depth=28, stamp="default")
namespace bench_tu_15222 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15222>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15222
