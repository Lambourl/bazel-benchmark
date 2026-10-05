#include "bench/fib.hpp"

// RE Benchmark TU 3786 of 20000 (depth=28, stamp="default")
namespace bench_tu_3786 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3786>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3786
