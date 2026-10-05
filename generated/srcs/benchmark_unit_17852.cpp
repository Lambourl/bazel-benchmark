#include "bench/fib.hpp"

// RE Benchmark TU 17852 of 20000 (depth=28, stamp="default")
namespace bench_tu_17852 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17852>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17852
