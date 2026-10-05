#include "bench/fib.hpp"

// RE Benchmark TU 13353 of 20000 (depth=28, stamp="default")
namespace bench_tu_13353 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13353>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13353
