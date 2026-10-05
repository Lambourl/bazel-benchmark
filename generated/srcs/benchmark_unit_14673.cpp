#include "bench/fib.hpp"

// RE Benchmark TU 14673 of 20000 (depth=28, stamp="default")
namespace bench_tu_14673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14673
