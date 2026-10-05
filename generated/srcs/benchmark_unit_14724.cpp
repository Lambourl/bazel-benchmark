#include "bench/fib.hpp"

// RE Benchmark TU 14724 of 20000 (depth=28, stamp="default")
namespace bench_tu_14724 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14724>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14724
