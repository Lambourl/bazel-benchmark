#include "bench/fib.hpp"

// RE Benchmark TU 17865 of 20000 (depth=28, stamp="default")
namespace bench_tu_17865 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17865>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17865
