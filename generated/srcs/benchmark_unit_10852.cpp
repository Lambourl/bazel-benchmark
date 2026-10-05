#include "bench/fib.hpp"

// RE Benchmark TU 10852 of 20000 (depth=28, stamp="default")
namespace bench_tu_10852 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10852>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10852
