#include "bench/fib.hpp"

// RE Benchmark TU 11021 of 20000 (depth=28, stamp="default")
namespace bench_tu_11021 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11021>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11021
