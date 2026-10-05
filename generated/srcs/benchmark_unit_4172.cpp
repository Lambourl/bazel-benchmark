#include "bench/fib.hpp"

// RE Benchmark TU 4172 of 20000 (depth=28, stamp="default")
namespace bench_tu_4172 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4172>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4172
