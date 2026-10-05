#include "bench/fib.hpp"

// RE Benchmark TU 6500 of 20000 (depth=28, stamp="default")
namespace bench_tu_6500 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6500>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6500
