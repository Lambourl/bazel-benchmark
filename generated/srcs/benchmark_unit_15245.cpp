#include "bench/fib.hpp"

// RE Benchmark TU 15245 of 20000 (depth=28, stamp="default")
namespace bench_tu_15245 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15245>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15245
