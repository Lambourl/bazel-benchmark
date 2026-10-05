#include "bench/fib.hpp"

// RE Benchmark TU 929 of 20000 (depth=28, stamp="default")
namespace bench_tu_929 {
constexpr unsigned long long result = ::bench::slow_fib<28, 929>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_929
