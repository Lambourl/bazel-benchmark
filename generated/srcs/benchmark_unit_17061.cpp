#include "bench/fib.hpp"

// RE Benchmark TU 17061 of 20000 (depth=28, stamp="default")
namespace bench_tu_17061 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17061>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17061
