#include "bench/fib.hpp"

// RE Benchmark TU 14066 of 20000 (depth=28, stamp="default")
namespace bench_tu_14066 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14066>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14066
