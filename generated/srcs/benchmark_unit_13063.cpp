#include "bench/fib.hpp"

// RE Benchmark TU 13063 of 20000 (depth=28, stamp="default")
namespace bench_tu_13063 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13063>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13063
