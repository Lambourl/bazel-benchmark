#include "bench/fib.hpp"

// RE Benchmark TU 778 of 20000 (depth=28, stamp="default")
namespace bench_tu_778 {
constexpr unsigned long long result = ::bench::slow_fib<28, 778>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_778
