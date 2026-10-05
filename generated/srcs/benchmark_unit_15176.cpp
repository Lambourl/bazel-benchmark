#include "bench/fib.hpp"

// RE Benchmark TU 15176 of 20000 (depth=28, stamp="default")
namespace bench_tu_15176 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15176>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15176
