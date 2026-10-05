#include "bench/fib.hpp"

// RE Benchmark TU 9008 of 20000 (depth=28, stamp="default")
namespace bench_tu_9008 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9008>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9008
