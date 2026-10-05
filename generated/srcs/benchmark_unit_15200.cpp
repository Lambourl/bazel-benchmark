#include "bench/fib.hpp"

// RE Benchmark TU 15200 of 20000 (depth=28, stamp="default")
namespace bench_tu_15200 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15200>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15200
