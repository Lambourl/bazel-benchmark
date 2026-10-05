#include "bench/fib.hpp"

// RE Benchmark TU 5829 of 20000 (depth=28, stamp="default")
namespace bench_tu_5829 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5829>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5829
