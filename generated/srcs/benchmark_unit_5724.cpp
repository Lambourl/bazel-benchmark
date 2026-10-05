#include "bench/fib.hpp"

// RE Benchmark TU 5724 of 20000 (depth=28, stamp="default")
namespace bench_tu_5724 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5724>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5724
