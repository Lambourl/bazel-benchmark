#include "bench/fib.hpp"

// RE Benchmark TU 2646 of 20000 (depth=28, stamp="default")
namespace bench_tu_2646 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2646>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2646
