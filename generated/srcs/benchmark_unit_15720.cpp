#include "bench/fib.hpp"

// RE Benchmark TU 15720 of 20000 (depth=28, stamp="default")
namespace bench_tu_15720 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15720>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15720
