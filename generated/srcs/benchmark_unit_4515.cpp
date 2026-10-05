#include "bench/fib.hpp"

// RE Benchmark TU 4515 of 20000 (depth=28, stamp="default")
namespace bench_tu_4515 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4515>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4515
