#include "bench/fib.hpp"

// RE Benchmark TU 19774 of 20000 (depth=28, stamp="default")
namespace bench_tu_19774 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19774>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19774
