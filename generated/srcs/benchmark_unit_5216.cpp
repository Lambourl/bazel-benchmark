#include "bench/fib.hpp"

// RE Benchmark TU 5216 of 20000 (depth=28, stamp="default")
namespace bench_tu_5216 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5216>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5216
