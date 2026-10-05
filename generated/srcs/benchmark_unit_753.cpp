#include "bench/fib.hpp"

// RE Benchmark TU 753 of 20000 (depth=28, stamp="default")
namespace bench_tu_753 {
constexpr unsigned long long result = ::bench::slow_fib<28, 753>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_753
