#include "bench/fib.hpp"

// RE Benchmark TU 17720 of 20000 (depth=28, stamp="default")
namespace bench_tu_17720 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17720>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17720
