#include "bench/fib.hpp"

// RE Benchmark TU 8287 of 20000 (depth=28, stamp="default")
namespace bench_tu_8287 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8287>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8287
