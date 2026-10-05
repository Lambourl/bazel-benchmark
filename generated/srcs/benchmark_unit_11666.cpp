#include "bench/fib.hpp"

// RE Benchmark TU 11666 of 20000 (depth=28, stamp="default")
namespace bench_tu_11666 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11666>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11666
