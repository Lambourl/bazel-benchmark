#include "bench/fib.hpp"

// RE Benchmark TU 4287 of 20000 (depth=28, stamp="default")
namespace bench_tu_4287 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4287>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4287
