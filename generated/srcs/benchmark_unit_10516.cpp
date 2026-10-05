#include "bench/fib.hpp"

// RE Benchmark TU 10516 of 20000 (depth=28, stamp="default")
namespace bench_tu_10516 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10516>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10516
