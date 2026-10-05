#include "bench/fib.hpp"

// RE Benchmark TU 18402 of 20000 (depth=28, stamp="default")
namespace bench_tu_18402 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18402>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18402
