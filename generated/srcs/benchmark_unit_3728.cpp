#include "bench/fib.hpp"

// RE Benchmark TU 3728 of 20000 (depth=28, stamp="default")
namespace bench_tu_3728 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3728>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3728
