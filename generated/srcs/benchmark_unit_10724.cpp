#include "bench/fib.hpp"

// RE Benchmark TU 10724 of 20000 (depth=28, stamp="default")
namespace bench_tu_10724 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10724>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10724
