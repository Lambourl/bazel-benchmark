#include "bench/fib.hpp"

// RE Benchmark TU 15805 of 20000 (depth=28, stamp="default")
namespace bench_tu_15805 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15805>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15805
