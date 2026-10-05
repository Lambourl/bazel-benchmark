#include "bench/fib.hpp"

// RE Benchmark TU 15692 of 20000 (depth=28, stamp="default")
namespace bench_tu_15692 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15692>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15692
