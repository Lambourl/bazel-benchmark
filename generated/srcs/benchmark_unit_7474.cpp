#include "bench/fib.hpp"

// RE Benchmark TU 7474 of 20000 (depth=28, stamp="default")
namespace bench_tu_7474 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7474>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7474
