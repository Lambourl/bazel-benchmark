#include "bench/fib.hpp"

// RE Benchmark TU 2911 of 20000 (depth=28, stamp="default")
namespace bench_tu_2911 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2911>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2911
