#include "bench/fib.hpp"

// RE Benchmark TU 16675 of 20000 (depth=28, stamp="default")
namespace bench_tu_16675 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16675>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16675
