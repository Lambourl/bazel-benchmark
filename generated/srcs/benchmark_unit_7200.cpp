#include "bench/fib.hpp"

// RE Benchmark TU 7200 of 20000 (depth=28, stamp="default")
namespace bench_tu_7200 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7200>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7200
