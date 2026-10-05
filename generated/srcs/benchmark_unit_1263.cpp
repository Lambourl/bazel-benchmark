#include "bench/fib.hpp"

// RE Benchmark TU 1263 of 20000 (depth=28, stamp="default")
namespace bench_tu_1263 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1263>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1263
