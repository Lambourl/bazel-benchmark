#include "bench/fib.hpp"

// RE Benchmark TU 14007 of 20000 (depth=28, stamp="default")
namespace bench_tu_14007 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14007>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14007
