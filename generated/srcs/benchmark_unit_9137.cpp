#include "bench/fib.hpp"

// RE Benchmark TU 9137 of 20000 (depth=28, stamp="default")
namespace bench_tu_9137 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9137>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9137
