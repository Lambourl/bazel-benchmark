#include "bench/fib.hpp"

// RE Benchmark TU 82 of 20000 (depth=28, stamp="default")
namespace bench_tu_82 {
constexpr unsigned long long result = ::bench::slow_fib<28, 82>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_82
