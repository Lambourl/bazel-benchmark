#include "bench/fib.hpp"

// RE Benchmark TU 18881 of 20000 (depth=28, stamp="default")
namespace bench_tu_18881 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18881>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18881
