#include "bench/fib.hpp"

// RE Benchmark TU 1099 of 20000 (depth=28, stamp="default")
namespace bench_tu_1099 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1099>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1099
