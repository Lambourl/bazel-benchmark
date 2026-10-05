#include "bench/fib.hpp"

// RE Benchmark TU 228 of 20000 (depth=28, stamp="default")
namespace bench_tu_228 {
constexpr unsigned long long result = ::bench::slow_fib<28, 228>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_228
