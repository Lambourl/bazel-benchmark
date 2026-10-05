#include "bench/fib.hpp"

// RE Benchmark TU 10365 of 20000 (depth=28, stamp="default")
namespace bench_tu_10365 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10365>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10365
