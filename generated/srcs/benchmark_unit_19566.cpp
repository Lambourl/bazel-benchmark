#include "bench/fib.hpp"

// RE Benchmark TU 19566 of 20000 (depth=28, stamp="default")
namespace bench_tu_19566 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19566>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19566
