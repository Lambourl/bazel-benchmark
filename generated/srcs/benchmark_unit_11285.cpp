#include "bench/fib.hpp"

// RE Benchmark TU 11285 of 20000 (depth=28, stamp="default")
namespace bench_tu_11285 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11285>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11285
