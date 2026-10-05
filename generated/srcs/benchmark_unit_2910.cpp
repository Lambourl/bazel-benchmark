#include "bench/fib.hpp"

// RE Benchmark TU 2910 of 20000 (depth=28, stamp="default")
namespace bench_tu_2910 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2910>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2910
