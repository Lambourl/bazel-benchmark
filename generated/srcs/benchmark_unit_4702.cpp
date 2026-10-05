#include "bench/fib.hpp"

// RE Benchmark TU 4702 of 20000 (depth=28, stamp="default")
namespace bench_tu_4702 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4702>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4702
