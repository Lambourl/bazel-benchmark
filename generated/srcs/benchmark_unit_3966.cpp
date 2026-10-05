#include "bench/fib.hpp"

// RE Benchmark TU 3966 of 20000 (depth=28, stamp="default")
namespace bench_tu_3966 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3966>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3966
