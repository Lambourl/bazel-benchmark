#include "bench/fib.hpp"

// RE Benchmark TU 7181 of 20000 (depth=28, stamp="default")
namespace bench_tu_7181 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7181>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7181
