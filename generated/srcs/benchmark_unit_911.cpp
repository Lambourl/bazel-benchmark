#include "bench/fib.hpp"

// RE Benchmark TU 911 of 20000 (depth=28, stamp="default")
namespace bench_tu_911 {
constexpr unsigned long long result = ::bench::slow_fib<28, 911>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_911
