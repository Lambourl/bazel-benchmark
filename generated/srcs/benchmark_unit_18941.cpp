#include "bench/fib.hpp"

// RE Benchmark TU 18941 of 20000 (depth=28, stamp="default")
namespace bench_tu_18941 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18941>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18941
