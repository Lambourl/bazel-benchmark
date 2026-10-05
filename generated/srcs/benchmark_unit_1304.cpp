#include "bench/fib.hpp"

// RE Benchmark TU 1304 of 20000 (depth=28, stamp="default")
namespace bench_tu_1304 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1304>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1304
