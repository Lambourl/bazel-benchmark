#include "bench/fib.hpp"

// RE Benchmark TU 9922 of 20000 (depth=28, stamp="default")
namespace bench_tu_9922 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9922>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9922
