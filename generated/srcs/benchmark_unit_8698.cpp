#include "bench/fib.hpp"

// RE Benchmark TU 8698 of 20000 (depth=28, stamp="default")
namespace bench_tu_8698 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8698>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8698
