#include "bench/fib.hpp"

// RE Benchmark TU 3648 of 20000 (depth=28, stamp="default")
namespace bench_tu_3648 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3648>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3648
