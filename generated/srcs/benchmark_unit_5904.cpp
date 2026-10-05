#include "bench/fib.hpp"

// RE Benchmark TU 5904 of 20000 (depth=28, stamp="default")
namespace bench_tu_5904 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5904>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5904
