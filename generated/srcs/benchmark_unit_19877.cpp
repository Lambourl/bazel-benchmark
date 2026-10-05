#include "bench/fib.hpp"

// RE Benchmark TU 19877 of 20000 (depth=28, stamp="default")
namespace bench_tu_19877 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19877>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19877
