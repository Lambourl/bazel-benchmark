#include "bench/fib.hpp"

// RE Benchmark TU 4865 of 20000 (depth=28, stamp="default")
namespace bench_tu_4865 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4865>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4865
