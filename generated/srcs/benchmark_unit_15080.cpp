#include "bench/fib.hpp"

// RE Benchmark TU 15080 of 20000 (depth=28, stamp="default")
namespace bench_tu_15080 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15080>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15080
