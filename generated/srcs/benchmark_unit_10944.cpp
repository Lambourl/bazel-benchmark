#include "bench/fib.hpp"

// RE Benchmark TU 10944 of 20000 (depth=28, stamp="default")
namespace bench_tu_10944 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10944>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10944
