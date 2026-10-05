#include "bench/fib.hpp"

// RE Benchmark TU 5738 of 20000 (depth=28, stamp="default")
namespace bench_tu_5738 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5738>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5738
