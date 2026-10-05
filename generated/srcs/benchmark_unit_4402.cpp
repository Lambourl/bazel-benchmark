#include "bench/fib.hpp"

// RE Benchmark TU 4402 of 20000 (depth=28, stamp="default")
namespace bench_tu_4402 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4402>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4402
