#include "bench/fib.hpp"

// RE Benchmark TU 6682 of 20000 (depth=28, stamp="default")
namespace bench_tu_6682 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6682>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6682
