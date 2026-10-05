#include "bench/fib.hpp"

// RE Benchmark TU 2783 of 20000 (depth=28, stamp="default")
namespace bench_tu_2783 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2783>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2783
