#include "bench/fib.hpp"

// RE Benchmark TU 6247 of 20000 (depth=28, stamp="default")
namespace bench_tu_6247 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6247>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6247
