#include "bench/fib.hpp"

// RE Benchmark TU 2648 of 20000 (depth=28, stamp="default")
namespace bench_tu_2648 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2648>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2648
