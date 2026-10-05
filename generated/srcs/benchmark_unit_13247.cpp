#include "bench/fib.hpp"

// RE Benchmark TU 13247 of 20000 (depth=28, stamp="default")
namespace bench_tu_13247 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13247>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13247
