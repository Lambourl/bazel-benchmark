#include "bench/fib.hpp"

// RE Benchmark TU 745 of 20000 (depth=28, stamp="default")
namespace bench_tu_745 {
constexpr unsigned long long result = ::bench::slow_fib<28, 745>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_745
