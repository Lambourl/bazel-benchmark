#include "bench/fib.hpp"

// RE Benchmark TU 11402 of 20000 (depth=28, stamp="default")
namespace bench_tu_11402 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11402>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11402
