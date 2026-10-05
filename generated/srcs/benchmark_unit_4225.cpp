#include "bench/fib.hpp"

// RE Benchmark TU 4225 of 20000 (depth=28, stamp="default")
namespace bench_tu_4225 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4225>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4225
