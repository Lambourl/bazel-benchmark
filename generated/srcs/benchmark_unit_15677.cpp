#include "bench/fib.hpp"

// RE Benchmark TU 15677 of 20000 (depth=28, stamp="default")
namespace bench_tu_15677 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15677>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15677
