#include "bench/fib.hpp"

// RE Benchmark TU 5865 of 20000 (depth=28, stamp="default")
namespace bench_tu_5865 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5865>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5865
