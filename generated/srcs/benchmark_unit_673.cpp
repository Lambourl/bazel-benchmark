#include "bench/fib.hpp"

// RE Benchmark TU 673 of 20000 (depth=28, stamp="default")
namespace bench_tu_673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_673
