#include "bench/fib.hpp"

// RE Benchmark TU 10504 of 20000 (depth=28, stamp="default")
namespace bench_tu_10504 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10504>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10504
