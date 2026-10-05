#include "bench/fib.hpp"

// RE Benchmark TU 65 of 20000 (depth=28, stamp="default")
namespace bench_tu_65 {
constexpr unsigned long long result = ::bench::slow_fib<28, 65>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_65
