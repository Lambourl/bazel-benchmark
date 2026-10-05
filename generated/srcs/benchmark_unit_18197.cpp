#include "bench/fib.hpp"

// RE Benchmark TU 18197 of 20000 (depth=28, stamp="default")
namespace bench_tu_18197 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18197>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18197
