#include "bench/fib.hpp"

// RE Benchmark TU 17673 of 20000 (depth=28, stamp="default")
namespace bench_tu_17673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17673
