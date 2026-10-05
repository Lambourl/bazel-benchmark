#include "bench/fib.hpp"

// RE Benchmark TU 3689 of 20000 (depth=28, stamp="default")
namespace bench_tu_3689 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3689>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3689
