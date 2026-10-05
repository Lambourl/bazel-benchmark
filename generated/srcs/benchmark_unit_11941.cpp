#include "bench/fib.hpp"

// RE Benchmark TU 11941 of 20000 (depth=28, stamp="default")
namespace bench_tu_11941 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11941>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11941
