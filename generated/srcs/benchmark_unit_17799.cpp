#include "bench/fib.hpp"

// RE Benchmark TU 17799 of 20000 (depth=28, stamp="default")
namespace bench_tu_17799 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17799>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17799
