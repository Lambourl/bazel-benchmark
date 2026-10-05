#include "bench/fib.hpp"

// RE Benchmark TU 1159 of 20000 (depth=28, stamp="default")
namespace bench_tu_1159 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1159>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1159
