#include "bench/fib.hpp"

// RE Benchmark TU 9570 of 20000 (depth=28, stamp="default")
namespace bench_tu_9570 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9570>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9570
