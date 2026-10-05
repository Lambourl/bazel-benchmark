#include "bench/fib.hpp"

// RE Benchmark TU 95 of 20000 (depth=28, stamp="default")
namespace bench_tu_95 {
constexpr unsigned long long result = ::bench::slow_fib<28, 95>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_95
