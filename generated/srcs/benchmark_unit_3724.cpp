#include "bench/fib.hpp"

// RE Benchmark TU 3724 of 20000 (depth=28, stamp="default")
namespace bench_tu_3724 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3724>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3724
