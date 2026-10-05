#include "bench/fib.hpp"

// RE Benchmark TU 1966 of 20000 (depth=28, stamp="default")
namespace bench_tu_1966 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1966>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1966
