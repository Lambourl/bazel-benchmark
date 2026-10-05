#include "bench/fib.hpp"

// RE Benchmark TU 4911 of 20000 (depth=28, stamp="default")
namespace bench_tu_4911 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4911>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4911
