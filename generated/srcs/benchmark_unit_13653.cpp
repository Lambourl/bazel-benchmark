#include "bench/fib.hpp"

// RE Benchmark TU 13653 of 20000 (depth=28, stamp="default")
namespace bench_tu_13653 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13653>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13653
